class Solution {
public:
     void solve(map<int, int>& mp, vector<int>& ds,
               vector<vector<int>>& ans, int n){
                if(n==ds.size()){
                    ans.push_back(ds);
                    return;
                }
                for(auto &it:mp){
                    if(it.second==0)
                        continue;


                  ds.push_back(it.first);
                  it.second--;
                  solve(mp,ds,ans,n);
                  ds.pop_back();
                  it.second++;      
                }
               }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
         map<int, int> mp;

        for (int x : nums)
            mp[x]++;

        vector<vector<int>> ans;
        vector<int> ds;

        solve(mp, ds, ans, nums.size());

        return ans;
        
    }
};