class Solution {
public:
     void solve(int idx, vector<int>& ds, int target,
               vector<int>& cand, vector<vector<int>>& ans){
                if(idx == cand.size()){
                    if(target== 0){
                        ans.push_back(ds);
                    }
                        return;
                }
                    if(cand[idx]<=target){
                        ds.push_back(cand[idx]);
                        solve(idx,ds,target-cand[idx],cand,ans);
                        ds.pop_back();
                    }
                    solve(idx+1,ds,target,cand,ans);

               }
    vector<vector<int>> combinationSum(vector<int>& candi, int target) {
         vector<vector<int>> ans;
        vector<int> ds;

        solve(0,ds,target,candi,ans);
        return ans;
        
    }
};