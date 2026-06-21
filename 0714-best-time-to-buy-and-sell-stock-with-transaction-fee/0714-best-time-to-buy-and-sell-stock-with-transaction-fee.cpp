class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n+2, vector<int>(2, 0));

        for(int ind = n-1; ind >= 0; --ind){
            for(int buy = 0; buy <= 1; ++buy){
                int prf = 0;

                if(buy){
                    int bs = -prices[ind] + dp[ind+1][0];
                    int move = 0 + dp[ind+1][1];
                    prf = max(bs, move);
                } else {
                    int ss = prices[ind] + (-fee) + dp[ind+1][1];
                    int move = 0 + dp[ind+1][0];
                    prf = max(ss, move);
                }
                dp[ind][buy] = prf;
            }
        }
        return dp[0][1];
    }

    int solve(int ind, int buy, vector<int>& prices, int fee, vector<vector<int>>& dp){
        if(ind >= prices.size()) return 0;
        if(dp[ind][buy] != -1) return dp[ind][buy];
        int prf = 0;

        if(buy){
            int bs = -prices[ind] + solve(ind+1, 0, prices, fee, dp);
            int move = 0 + solve(ind+1, 1, prices, fee, dp);
            prf = max(bs, move);
        } else {
            int ss = prices[ind] + (-fee) + solve(ind+1, 1, prices, fee, dp);
            int move = 0 + solve(ind+1, 0, prices, fee, dp);
            prf = max(ss, move);
        }
        return dp[ind][buy] = prf;
    }
};