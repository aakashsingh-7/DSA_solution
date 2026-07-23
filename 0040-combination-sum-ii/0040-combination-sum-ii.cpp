class Solution {
public:
    void solve(int idx, vector<int>& ds, int target,
               vector<int>& cand, vector<vector<int>>& ans) {

        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        for (int i = idx; i < cand.size(); i++) {

            if (i > idx && cand[i] == cand[i - 1])
                continue;


            if (cand[i] > target)
                break;

            ds.push_back(cand[i]);
            solve(i + 1, ds, target - cand[i], cand, ans);

            ds.pop_back(); 
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> ds;

        solve(0, ds, target, candidates, ans);

        return ans;
    }
};