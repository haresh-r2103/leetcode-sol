class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(k+1, 0)));

        for(int ind = n-1; ind >= 0; ind--){
            for(int buy = 0; buy <= 1; ++buy){
                for(int c = 1; c <= k; ++c){
                    int prof = 0;
                    if(buy){
                        int bs = -prices[ind] + dp[ind+1][0][c];
                        int m = 0 + dp[ind+1][1][c];
                        prof = max(bs, m);
                    } else {
                        int ss = prices[ind] + dp[ind+1][1][c-1];
                        int m = 0 + dp[ind+1][0][c];
                        prof = max(ss, m);
                    }

                    dp[ind][buy][c] = prof;
                }
            }
        }

        return dp[0][1][k];
    }

};