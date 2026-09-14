class Solution :
public: 
bool isDigitSumPlaindrome(int n ){
       string st = to_string(n);
       int sum = 0; 
       for (auto c :st){
              sum += c - '0';
       }
       string a = to.string(sum);
       string b = a; 
       reverse(b.begin(), b.end());
       if (a == b) return true; 
       return false;
       };
