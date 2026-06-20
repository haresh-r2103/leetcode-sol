class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        
        vector<int> dp(n+1, 0);


        // base case
        dp[0] = nums[0];
        for(int ind = 1; ind < n; ++ind){
            int np = 0 + dp[ind-1];
            int p = nums[ind];
            if(ind > 1) p += dp[ind-2];
            dp[ind] = max(p, np);

        }

        return dp[n-1];
    }

    int solve(int ind, vector<int>& nums, vector<int>& dp){
        if(ind < 0) return 0;
        if(ind == 0) return nums[0];

        if(dp[ind] != -1) return dp[ind];

        int np = 0 + solve(ind-1, nums, dp);
        
        int p = nums[ind] + solve(ind-2, nums, dp);
        

        return dp[ind] = max(p, np);
    }
};