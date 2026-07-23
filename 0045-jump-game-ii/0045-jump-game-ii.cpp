class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(0, nums, dp);
    }

    int solve(int ind, vector<int>& nums, vector<int>& dp) {
        if (ind >= nums.size() - 1)
            return 0;
        if(dp[ind] != -1) return dp[ind];

        int ans = INT_MAX;

        for (int jump = 1; jump <= nums[ind]; jump++) {
            if (ind + jump < nums.size()) {
                int tmp = solve(ind + jump, nums, dp);
                if(tmp != INT_MAX) ans = min(ans, tmp+1); 
            }
        }

        return dp[ind] = ans;
    }
};