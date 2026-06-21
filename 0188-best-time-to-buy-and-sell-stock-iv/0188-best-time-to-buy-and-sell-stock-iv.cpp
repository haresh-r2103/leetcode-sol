class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(k+1, -1)));
        return solve(0, 1, prices, k, dp);
    }

    int solve(int ind, int buy, vector<int>& prices, int k, vector<vector<vector<int>>>& dp){
        if(ind == prices.size()) return 0;
        if(k == 0) return 0;
        if(dp[ind][buy][k] != -1) return dp[ind][buy][k];

        int prof = 0;
        if(buy){

            int bs = -prices[ind] + solve(ind+1, 0, prices, k, dp);
            int m = 0 + solve(ind+1, 1, prices, k, dp);
            prof = max(bs, m);
        } else {
            
            int ss = prices[ind] + solve(ind+1, 1, prices, k-1, dp);
            int m = 0 + solve(ind+1, 0, prices, k, dp);
            prof = max(ss, m);
        }

        return dp[ind][buy][k] = prof;
        
    }
};