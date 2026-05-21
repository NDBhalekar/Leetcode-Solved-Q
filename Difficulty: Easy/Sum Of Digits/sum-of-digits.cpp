class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        
        string s = to_string(n);
        int ans = 0;
        for(int i=0;i<s.size();i++){
            int a = s[i] - '0';
            ans+=a;
        }
        return ans;
    }
};