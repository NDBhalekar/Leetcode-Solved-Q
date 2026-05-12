 class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        
    int n = arr.size();
    unordered_set<int>s;
     vector<int>ans;
   for(int i =0;i<n;i++){
       
       if(s.find(arr[i])== s.end()){
        s.insert(arr[i]);
        ans.push_back(arr[i]);
           
       }
   }
   
  
   return ans;

    }
};
     