class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0) return 0;
        int n = coins.size();


        vector<vector<int>> dp(n, vector<int>(amount+1, 0));

        // base cases
        for(int T = 0; T <= amount; ++T){
            if(T % coins[0] == 0){
                dp[0][T] = T / coins[0];
            } else {
                dp[0][T] = 1e9;
            }
        }
        

        for(int ind = 1; ind < n; ++ind){
            for(int target = 1; target <= amount; ++target){
                long np = 0 + dp[ind-1][target];
                long p = 1e9;
                if(coins[ind] <= target){
                    p = 1 + dp[ind][target - coins[ind]];
                }
                dp[ind][target] = min(p, np);
            }

        }

        return dp[n-1][amount] == 1e9 ? -1 : dp[n-1][amount];
        
    }
};