class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n+2, vector<int>(2, 0));

        // base case -> Handled while initiating the dp iteself
        
        for(int ind = n-1; ind >= 0; --ind){
            for(int buy = 0; buy <= 1; ++buy){
                int prof = 0;

                if(buy){
                    int bs = -prices[ind] + dp[ind+1][0];
                    int move = 0 + dp[ind+1][1];
                    prof = max(bs, move);
                } else {
                    int ss = prices[ind] + dp[ind+2][1];
                    int move = 0 + dp[ind+1][0];
                    prof = max(ss, move);
                }
                dp[ind][buy] = prof;
            }
        }

        return dp[0][1];
    }
};