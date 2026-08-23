// class Solution {
// public: 
//     vector<vector<int>>ans;
//     void solve(int idx,vector<int>nums,vector<int>temp){
//     if(idx == nums.size()){
//         ans.push_back(temp);
//         return;
//     }
//     temp.push_back(nums[idx]);
//     solve(idx+1,nums,temp);
//     temp.pop_back();
//     solve(idx+1,nums,temp);

//     }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<int>temp;
//         solve(0,nums,temp);
//         return ans;
        
//     }
// };
class Solution{
    public:
    vector<vector<int>>ans;
    vector<vector<int>> subsets(vector<int>& nums){
    int n = nums.size();
    for(int i = 0;i<(1<<n);i++){
        vector<int> temp;
        for(int j = 0;j<n;j++){
            if(i&(1<<j)){
                 temp.push_back(nums[j]);
            }
        }
        ans.push_back(temp);

    }
return ans;
    }
    
};
