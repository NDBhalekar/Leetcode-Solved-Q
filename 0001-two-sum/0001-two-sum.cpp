template<typename T>
T add(T a,T b){
    return a+b;
}

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     
bool flag = false;
vector<int>arr;
for(int i=0;i<nums.size();i++){
for(int j=i+1;j<nums.size();j++){
  int a = add(nums[i],nums[j]);
    if(target ==a){
        arr.push_back(i);
        arr.push_back(j);
        flag = true;
        break;
        
    }
    
}
if(flag) break;  
}
return arr;

    }
};