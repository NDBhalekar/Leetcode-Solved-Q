class Solution {
  public:
    int pairCubeCount(int n) {
      
      int cnt = 0;
      for(int i =1 ; i <=cbrt(n);i++){
          int cb = i*i*i;
          
          int cbdiff = n - cb;
          int b = cbrt(cbdiff);
           if(b*b*b == cbdiff) cnt++;
          
      }
      
      
      
      return cnt;
      
    }
};