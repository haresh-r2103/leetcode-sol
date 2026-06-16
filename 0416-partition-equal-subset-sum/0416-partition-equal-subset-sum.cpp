class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        for(int num: nums) s += num;
        if(s % 2 != 0) return false;
        int sum = s / 2;

        vector<vector<bool>> dp(n+1, vector<bool>(sum+1, false));
        // base case

        for(int i = 0; i < n; ++i) dp[i][0] = true;
        if(nums[0] <= sum) dp[0][nums[0]] = true;

        for(int ind = 1; ind < n; ++ind){
            for(int target = 1; target <= sum; ++target){
                bool np = dp[ind-1][target];
                bool p = false;
                if(nums[ind] <= target){
                    p = dp[ind-1][target - nums[ind]];
                }
                dp[ind][target] = (p || np);
            }
        }

        return dp[n-1][sum];
        
    }
};