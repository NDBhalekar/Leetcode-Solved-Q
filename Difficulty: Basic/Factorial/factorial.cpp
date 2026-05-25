class Solution {
  public:
    int factorial(int n) {
        // code here
        int a = 1;
        for(int i=n ; i >0 ; i--){
            a*=i;
        }
        return a;
    }
};