class Solution {
public:
    vector<vector<int>> ans;

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> tmp;
        solve(n-1, target, tmp, ans, candidates);
        return ans;
    }

    void solve(int ind, int t, vector<int>& tmp, vector<vector<int>>& ans, vector<int>& cand) {
        if(t < 0 || ind < 0) return;
        if(t == 0){
            ans.push_back(tmp);
            return;
        }

        // pick
        tmp.push_back(cand[ind]);
        solve(ind, t - cand[ind], tmp, ans, cand);
        tmp.pop_back();

        solve(ind-1, t, tmp, ans, cand);
    }

};