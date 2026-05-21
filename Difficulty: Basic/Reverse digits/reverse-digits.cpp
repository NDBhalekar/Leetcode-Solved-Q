class Solution {
  public:
    int reverseDigits(int n) {
        string s = to_string(n);
        reverse(s.begin(),s.end());
        int a = stoi(s);
        return a;
    }
};