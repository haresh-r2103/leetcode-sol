class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(3, -1)));
        return solve(0, 1, prices, 2, dp);
    }

    int solve(int ind, int buy, vector<int>& prices, int c, vector<vector<vector<int>>>& dp)
    {
        if(ind == prices.size() || c == 0) return 0;
        if(dp[ind][buy][c] != -1) return dp[ind][buy][c];
        int prf = 0;
        
        if(buy){
            int buyStock = -prices[ind] + solve(ind+1, 0, prices, c, dp);
            int move = 0 + solve(ind+1, 1, prices, c, dp);
            prf = max(buyStock, move);
        } else {
            int sellStock = prices[ind] + solve(ind+1, 1, prices, c-1, dp);
            int move = 0 + solve(ind+1, 0, prices, c, dp);
            prf = max(sellStock, move);
        }

        return dp[ind][buy][c] =  prf;                                          
    }
};