class Solution {
  public:
    int lcm(int a, int b) {
        // code here
       return (a*b)/__gcd(a,b);
    }
};