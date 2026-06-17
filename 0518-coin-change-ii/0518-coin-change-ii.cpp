class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        if(amount == 0) return 1;

        vector<vector<int>> dp(n+1, vector<int>(amount+1, -1));
        return solve(n-1, coins, amount, dp);
    }

    int solve(int ind, vector<int>& coins, int amt, vector<vector<int>>& dp){
        if(ind == 0){
            return (amt % coins[ind] == 0);
        }

        if(dp[ind][amt] != -1) return dp[ind][amt];

        int np = solve(ind-1, coins, amt, dp);
        int p = 0;
        if(coins[ind] <= amt){
            p = solve(ind, coins, amt - coins[ind], dp);
        }

        return dp[ind][amt] = (np + p);
    }
};