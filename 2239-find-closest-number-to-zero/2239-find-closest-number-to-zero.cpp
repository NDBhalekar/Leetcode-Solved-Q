class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int m = INT_MAX;
        for(int i : nums){
            if(abs(i) < abs(m)){
                m = i;
            }
            else if (abs(i) == abs(m)){
                m = max(i,m);
            }
        }
        return m ;

    }
};