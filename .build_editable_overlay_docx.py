from io import BytesIO
from pathlib import Path
import re

import pymupdf
from docx import Document
from docx.oxml import OxmlElement
from docx.oxml.ns import qn
from docx.shared import Pt
from lxml import etree


SOURCE = Path(r"C:\Users\Shuvo\Downloads\Manuscript_anonymised_preview.pdf")
OUTPUT = Path(r"C:\Users\Shuvo\Downloads\Manuscript_anonymised_preview_proper_editable.docx")
BACKGROUND_DPI = 180
VML_NS = "urn:schemas-microsoft-com:vml"
INVALID_XML_CHARS = re.compile(
    "[\x00-\x08\x0B\x0C\x0E-\x1F\uD800-\uDFFF\uFFFE\uFFFF]"
)


def add_full_page_background(paragraph, png_bytes, width_pt, height_pt):
    shape = paragraph.add_run().add_picture(
        BytesIO(png_bytes), width=Pt(width_pt), height=Pt(height_pt)
    )
    inline = shape._inline
    anchor = OxmlElement("wp:anchor")
    for name, value in {
        "distT": "0", "distB": "0", "distL": "0", "distR": "0",
        "simplePos": "0", "relativeHeight": "0", "behindDoc": "1",
        "locked": "1", "layoutInCell": "1", "allowOverlap": "1",
    }.items():
        anchor.set(name, value)

    simple_pos = OxmlElement("wp:simplePos")
    simple_pos.set("x", "0")
    simple_pos.set("y", "0")
    anchor.append(simple_pos)
    for axis in ("H", "V"):
        position = OxmlElement(f"wp:position{axis}")
        position.set("relativeFrom", "page")
        offset = OxmlElement("wp:posOffset")
        offset.text = "0"
        position.append(offset)
        anchor.append(position)
    anchor.append(inline.extent)
    effect = OxmlElement("wp:effectExtent")
    for edge in ("l", "t", "r", "b"):
        effect.set(edge, "0")
    anchor.append(effect)
    anchor.append(OxmlElement("wp:wrapNone"))
    anchor.append(inline.docPr)
    frame = inline.find(
        "{http://schemas.openxmlformats.org/drawingml/2006/wordprocessingDrawing}cNvGraphicFramePr"
    )
    if frame is not None:
        anchor.append(frame)
    anchor.append(inline.graphic)
    inline.getparent().replace(inline, anchor)


def mapped_font(pdf_font):
    name = pdf_font.lower()
    if "nimbussan" in name:
        return "Arial"
    if any(token in name for token in ("stix", "cmsy", "cmmi", "cmex", "msbm", "rsfs", "symbol")):
        return "Cambria Math"
    return "Times New Roman"


def append_run(word_paragraph, span):
    run = OxmlElement("w:r")
    props = OxmlElement("w:rPr")
    font = mapped_font(span.get("font", ""))
    fonts = OxmlElement("w:rFonts")
    for attr in ("ascii", "hAnsi", "eastAsia", "cs"):
        fonts.set(qn(f"w:{attr}"), font)
    props.append(fonts)

    flags = span.get("flags", 0)
    font_name = span.get("font", "").lower()
    if flags & pymupdf.TEXT_FONT_BOLD or "bold" in font_name or "medi" in font_name:
        props.append(OxmlElement("w:b"))
    if flags & pymupdf.TEXT_FONT_ITALIC or "ital" in font_name or "slant" in font_name:
        props.append(OxmlElement("w:i"))
    if flags & pymupdf.TEXT_FONT_SUPERSCRIPT:
        vert = OxmlElement("w:vertAlign")
        vert.set(qn("w:val"), "superscript")
        props.append(vert)

    half_points = max(2, int(round(float(span.get("size", 10)) * 2)))
    size = OxmlElement("w:sz")
    size.set(qn("w:val"), str(half_points))
    props.append(size)
    size_cs = OxmlElement("w:szCs")
    size_cs.set(qn("w:val"), str(half_points))
    props.append(size_cs)

    scale = OxmlElement("w:w")
    scale.set(qn("w:val"), "95")
    props.append(scale)

    color_value = int(span.get("color", 0)) & 0xFFFFFF
    color = OxmlElement("w:color")
    color.set(qn("w:val"), f"{color_value:06X}")
    props.append(color)
    run.append(props)

    text = OxmlElement("w:t")
    text.set("{http://www.w3.org/XML/1998/namespace}space", "preserve")
    text.text = INVALID_XML_CHARS.sub("", span.get("text", ""))
    run.append(text)
    word_paragraph.append(run)


def add_text_line(anchor_paragraph, line, box_id, page_width):
    x0, y0, x1, y1 = line["bbox"]
    right_edge = 296 if x0 < 300 and x1 < 300 else page_width - 45
    width = max(x1 - x0 + 4, right_edge - x0)
    height = max(1, y1 - y0 + 4)

    run = OxmlElement("w:r")
    pict = OxmlElement("w:pict")
    rect = etree.Element(f"{{{VML_NS}}}rect")
    rect.set("id", f"EditableTextBox{box_id}")
    rect.set("filled", "f")
    rect.set("stroked", "f")
    rect.set(
        "style",
        "position:absolute;"
        f"margin-left:{x0:.3f}pt;margin-top:{y0 - 1:.3f}pt;"
        f"width:{width:.3f}pt;height:{height:.3f}pt;"
        "z-index:2;mso-position-horizontal-relative:page;"
        "mso-position-vertical-relative:page;"
        "mso-wrap-style:none;mso-wrap-distance-left:0;"
        "mso-wrap-distance-right:0;mso-wrap-distance-top:0;"
        "mso-wrap-distance-bottom:0",
    )
    textbox = etree.Element(f"{{{VML_NS}}}textbox")
    textbox.set("inset", "0,0,0,0")
    content = OxmlElement("w:txbxContent")

    word_paragraph = OxmlElement("w:p")
    p_props = OxmlElement("w:pPr")
    spacing = OxmlElement("w:spacing")
    spacing.set(qn("w:before"), "0")
    spacing.set(qn("w:after"), "0")
    spacing.set(qn("w:line"), str(int(round(height * 20))))
    spacing.set(qn("w:lineRule"), "exact")
    p_props.append(spacing)
    word_paragraph.append(p_props)
    for span in line.get("spans", []):
        append_run(word_paragraph, span)
    content.append(word_paragraph)

    textbox.append(content)
    rect.append(textbox)
    pict.append(rect)
    run.append(pict)
    anchor_paragraph._p.append(run)


def render_background(source_doc, page_number, text_blocks):
    one_page = pymupdf.open()
    one_page.insert_pdf(source_doc, from_page=page_number, to_page=page_number)
    page = one_page[0]
    for block in text_blocks:
        for line in block.get("lines", []):
            for span in line.get("spans", []):
                rect = pymupdf.Rect(span["bbox"])
                if not rect.is_empty:
                    page.add_redact_annot(rect, fill=None, cross_out=False)
    page.apply_redactions(images=0, graphics=0, text=0)
    matrix = pymupdf.Matrix(BACKGROUND_DPI / 72, BACKGROUND_DPI / 72)
    return page.get_pixmap(matrix=matrix, alpha=False).tobytes("png")


pdf = pymupdf.open(SOURCE)
doc = Document()
section = doc.sections[0]
first_rect = pdf[0].rect
section.page_width = Pt(first_rect.width)
section.page_height = Pt(first_rect.height)
section.top_margin = section.bottom_margin = Pt(0)
section.left_margin = section.right_margin = Pt(0)
section.header_distance = section.footer_distance = Pt(0)

normal = doc.styles["Normal"]
normal.font.name = "Times New Roman"
normal.font.size = Pt(1)
normal.paragraph_format.space_before = Pt(0)
normal.paragraph_format.space_after = Pt(0)
normal.paragraph_format.line_spacing = Pt(1)

box_id = 1
for page_number, page in enumerate(pdf):
    page_data = page.get_text("dict")
    text_blocks = [b for b in page_data["blocks"] if b.get("type") == 0]
    anchor_paragraph = doc.add_paragraph()
    if page_number:
        anchor_paragraph.paragraph_format.page_break_before = True
    anchor_paragraph.paragraph_format.space_before = Pt(0)
    anchor_paragraph.paragraph_format.space_after = Pt(0)
    anchor_paragraph.paragraph_format.line_spacing = Pt(1)

    background = render_background(pdf, page_number, text_blocks)
    add_full_page_background(anchor_paragraph, background, page.rect.width, page.rect.height)
    for block in text_blocks:
        for line in block.get("lines", []):
            add_text_line(anchor_paragraph, line, box_id, page.rect.width)
            box_id += 1

doc.save(OUTPUT)
print(f"Created {OUTPUT} with {len(pdf)} pages and {box_id - 1} editable text lines")
