class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        int n = nums.size();
        int ans = dynamicProg(n-1, nums, dp);
        return ans;
    }

    int dynamicProg(int ind, vector<int>& nums, vector<int>& dp){
        if(ind==0) return nums[0];
        if(ind<0) return 0;

        if(dp[ind] != -1) return dp[ind];

        int pick = nums[ind] + dynamicProg(ind-2, nums, dp);
        int npick = 0 + dynamicProg(ind-1, nums, dp);

        return dp[ind] =  max(pick, npick);
    }
};