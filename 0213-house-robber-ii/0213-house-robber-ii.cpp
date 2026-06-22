class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int> dp1(n+1, -1);
        vector<int> dp2(n+1, -1);
        return max(solve(n-1, nums, 1, dp1), solve(n-2, nums, 0, dp2));
    }

    int solve(int ind, vector<int>& nums, int end, vector<int>& dp){
        if(ind < end) return 0;
        if(dp[ind] != -1) return dp[ind];
        // pick
        int p = nums[ind] + solve(ind-2, nums, end, dp);
        int np = 0 + solve(ind-1, nums, end, dp);

        dp[ind] =  max(p, np);

        return dp[ind];
    }
};