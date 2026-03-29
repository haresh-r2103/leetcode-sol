class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return findAllSub(nums, n-1, dp);
    }


    int findAllSub(vector<int>& nums, int ind, vector<int>& dp){

        if(ind == 0) return nums[ind];
        if(ind < 0) return 0;

        if(dp[ind] != -1) return dp[ind];
        
        int p = nums[ind] + findAllSub(nums, ind-2, dp);
        int np = findAllSub(nums, ind-1, dp);

        return dp[ind] =  max(p, np);
    }
};