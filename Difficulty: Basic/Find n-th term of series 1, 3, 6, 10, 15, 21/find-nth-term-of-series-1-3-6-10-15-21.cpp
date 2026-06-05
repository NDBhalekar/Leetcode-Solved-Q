class Solution {
  public:
    int findNthTerm(int n) {
        
    if(n==1)return 1;
    
       int a1 = 1;
       int a2 = 2 ;
       for(int i=0;i<n-1;i++){
           a1+=a2;
           a2++;
       }
return a1;
        
    }
};