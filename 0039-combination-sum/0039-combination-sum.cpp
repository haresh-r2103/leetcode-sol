class Solution {
public:
    void cs(int ind, vector<int>& arr, int target, vector<vector<int>>& main, vector<int>& ds, int n){
        if(ind == n){
            if(target == 0){
                main.push_back(ds);
            }
            return;
        }

        if(arr[ind] <= target){
            ds.push_back(arr[ind]);
            cs(ind, arr, target-arr[ind], main, ds, n);
            ds.pop_back();
        }
        cs(ind+1, arr, target, main, ds, n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> main;
        int n = candidates.size();
        cs(0, candidates, target, main, ds, n);
        return main;
    }

};