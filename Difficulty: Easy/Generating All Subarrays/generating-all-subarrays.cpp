// User function Template for C++
class Solution {
  public:
    vector<vector<int> > getSubArrays(vector<int>& arr) {
        vector<vector<int>>ans;
        for(int i=0;i<arr.size();i++){
            vector<int>a;
            for(int j = i ;j<arr.size();j++){
            a.push_back(arr[j]);
            ans.push_back(a);
            }
            
        }
        return ans;
    }
};