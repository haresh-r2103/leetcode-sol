class Solution {
public:
    static const int MOD = 1e9 + 7;
    int dp[201][201][201];

    int subsequencePairCount(vector<int>& nums) {
        int n = nums.size();
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, 0, nums, n);
    }

    int solve(int ind, int gc1, int gc2, vector<int>& nums, int n){
        if(ind == n){
            return (gc1 != 0 && gc1 == gc2);
        }
        int &ans = dp[ind][gc1][gc2];
        if(ans != -1) return ans;
        ans = 0;

        // np
        ans = solve(ind+1, gc1, gc2, nums, n);

        int ng1;
        if(gc1 == 0) ng1 = nums[ind];
        else ng1 = __gcd(gc1, nums[ind]);
        ans = (ans + solve(ind+1, ng1, gc2, nums, n)) % MOD;

        int ng2;
        if(gc2 == 0) ng2 = nums[ind];
        else ng2 = __gcd(gc2, nums[ind]);
        ans = (ans + solve(ind+1, gc1, ng2, nums, n)) % MOD;

        return ans;
    }
};