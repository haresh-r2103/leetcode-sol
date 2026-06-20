class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        vector<vector<int>> dp(n+1, vector<int>(2, -1));
        return solve(0, prices, 1, dp);
    }

    int solve(int ind, vector<int>& prices, int buy, vector<vector<int>>& dp){
        // base case
        if(ind == prices.size()) return 0;

        if(dp[ind][buy] != -1) return dp[ind][buy];

        int prof = INT_MIN;
        if(buy){    
            // I can either buy or not buy
            int buy_stock = (-1 * prices[ind]) + solve(ind+1, prices, 0, dp);
            int move = 0 + solve(ind+1, prices, 1, dp);
            prof = max(buy_stock, move); 
        } else {
            // i can either sell or move
            int sell_stock = prices[ind] + solve(ind+1, prices, 1, dp);
            int move = 0 + solve(ind+1, prices, 0, dp);
            prof = max(sell_stock, move);
        }

        return dp[ind][buy] = prof;
    }
};