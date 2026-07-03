class Solution {
  public:
    int sumOfDigits(int n) {
        int ans =0;
       string s = to_string(n);
       for(int i=0;i<s.size();i++){
           ans += s[i] - '0';
       }
       return ans;
        
    }
};