class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n, 0);
        vector<vector<int>> ans;
        vector<int> t;

        dfs(nums, freq, t, ans);

        return ans;
    }

    void dfs(vector<int>& nums, vector<int>& freq, vector<int>& t, vector<vector<int>>& ans){
        // base case
        if(t.size() == nums.size()){
            ans.push_back(t);
            return;
        }


        for(int i = 0; i < nums.size(); ++i){
            if(!freq[i]){
                t.push_back(nums[i]);
                freq[i] = 1;
                dfs(nums, freq, t, ans);
                t.pop_back();
                freq[i] = 0;
            }
        }

    }
};