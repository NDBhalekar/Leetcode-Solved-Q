

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector<int>a;
        // int maxi = 0;
          int maxi = arr[arr.size()-1];
        
        
        for(int i=arr.size()-1;i>=0;i--){
        
            if(arr[i]>=maxi){
                maxi = arr[i];
                a.push_back(maxi);
            }
        }
        reverse(a.begin(),a.end());
        return a;
    }
};