class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto x:nums){
            freq[x]++;
        }
        int maxi = 0;
        for(auto y: freq){
            maxi= max(maxi,y.second);
        }
        int ans =0;
        for(auto z: freq){
            if(z.second == maxi) ans+=maxi;
        }
       return ans;

    }
};