class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n+2, vector<int>(2, -1));
        return solve(0, 1, prices, dp);
    }

    int solve(int ind, int buy, vector<int>& prices, vector<vector<int>>& dp){
        // base case
        if(ind >= prices.size()) return 0;
        if(dp[ind][buy] != -1) return dp[ind][buy];
        int prof = 0;

        if(buy){
            int bs = -prices[ind] + solve(ind+1, 0, prices, dp);
            int move = 0 + solve(ind+1, 1, prices, dp);
            prof = max(bs, move);
        } else {
            int ss = prices[ind] + solve(ind+2, 1, prices, dp);
            int move = 0 + solve(ind+1, 0, prices, dp);
            prof = max(ss, move);
        }

        return dp[ind][buy] = prof;
    }
};