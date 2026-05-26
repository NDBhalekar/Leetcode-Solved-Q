class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long a = nums[0];
        long long b = nums[nums.size()-1];
        return __gcd(a,b);
    }
};