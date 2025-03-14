class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n = nums.size();
        genSubs(0, nums, ds, ans, n);
        return ans;
    }
private:
    void genSubs(int ind, vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans, int n){
        if(ind == n){
            ans.push_back(ds);
            return;
        }

        //pick
        ds.push_back(nums[ind]);
        genSubs(ind+1, nums, ds, ans, n);
        ds.pop_back();
        //not pick
        genSubs(ind+1, nums, ds, ans, n);


    }
};