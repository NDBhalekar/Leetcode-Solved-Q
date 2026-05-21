class Solution {
  public:
    int closestNumber(int n, int m) {
        
    int closest = 0;
    int minD= INT_MAX;
    for(int i = n- abs(m);i<=n+abs(m);++i){
        if(i%m == 0){
            int diff = abs(n - i) ;
            if((diff < minD)|| (diff==minD && abs(i)>abs(closest)) ){
                closest = i;
                minD = diff;
            }
        }
    }
    return closest;
 
    }
};