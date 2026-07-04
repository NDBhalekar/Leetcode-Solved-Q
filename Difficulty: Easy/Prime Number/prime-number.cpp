class Solution {
  public:
    bool isPrime(int n) {
        bool flag = true;
    if(n==1) return false;
    else{
    for(int i=2;i<n;i++){
        
if(n%i ==0){
           flag = false;
            break;        }
// else {
//             flag= true;
//             break;}

    }}
    return flag;
    
    }
};
