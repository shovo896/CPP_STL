#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

// Larger intervals have higher priority; for equal lengths, choose the leftmost.
struct comp {
    bool operator()(const pair<int, int>& x, const pair<int, int>& y) const {
        const int len1 = x.second - x.first + 1;
        const int len2 = y.second - y.first + 1;
        if (len1 != len2) return len1 < len2;
        return x.first > y.first;
    }
};

void solve() {
    int n;
    cin >> n;

    vector<int> a(n + 1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, comp> pq;
    pq.push({1, n});

    for (int value = 1; value <= n; ++value) {
        auto [l, r] = pq.top();
        pq.pop();

        // For an even-length interval, use the left of the two middle cells.
        const int mid = (l + r - ((r - l + 1) % 2 == 0)) / 2;
        a[mid] = value;

        if (l <= mid - 1) pq.push({l, mid - 1});
        if (mid + 1 <= r) pq.push({mid + 1, r});
    }

    for (int i = 1; i <= n; ++i) {
        cout << a[i] << (i == n ? '\n' : ' ');
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;
    while (testCases--) solve();
}
