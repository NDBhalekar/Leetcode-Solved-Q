// User function Template for C++
class Solution {
  public:
  
  
    void solve(vector<int>& arr, int start,
               vector<vector<int>>& ans) {

        if (start == arr.size())
            return;

        vector<int> temp;

        for (int end = start; end < arr.size(); end++) {

            temp.push_back(arr[end]);

            ans.push_back(temp);
        }

        solve(arr, start + 1, ans);
    }
    vector<vector<int> > getSubArrays(vector<int>& arr) {
     
     vector<vector<int>> ans;

             solve(arr, 0, ans);

        return ans;
    
    }
};