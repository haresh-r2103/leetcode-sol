class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(3, 0)));

        // base case
        // Are handles when initialisation

        for(int ind = n-1; ind >= 0; --ind){
            for(int buy = 0; buy <= 1; ++buy){
                for(int c = 1; c <= 2; ++c){
                    int prf = 0;
                    if(buy){
                        int buyStock = -prices[ind] + dp[ind+1][0][c];
                        int move = 0 + dp[ind+1][1][c];
                        prf = max(buyStock, move);
                    } else {
                        int sellStock = prices[ind] + dp[ind+1][1][c-1];
                        int move = 0 + dp[ind+1][0][c];
                        prf = max(sellStock, move);
                    }
                    dp[ind][buy][c] = prf;
                }
            }
        }


        return dp[0][1][2];
    }
};