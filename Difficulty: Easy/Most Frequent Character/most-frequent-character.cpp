class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        map<char,int>mp;
        for(auto x : s){
            mp[x]++;
        }
        int maxi =0;
        for(auto y: mp){
            maxi = max(maxi,y.second);
        }
        char c ;
        for(auto z: mp){
            if(z.second == maxi){
                c = z.first;
                break;
            }
            
        }
        return c;
    }
};