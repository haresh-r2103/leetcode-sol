class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0) return 0;
        int n = coins.size();

        vector<vector<int>> dp(n+1, vector<int>(amount+1, -1));

        int ans = solve(n-1, coins, amount, dp);
        
        return ans == 1e9 ? -1 : ans;
    }

    int solve(int ind, vector<int>& coins, int amt, vector<vector<int>>& dp){
        if(ind == 0){
            if(amt % coins[ind] == 0) return amt / coins[ind];
            else return 1e9;
        }

        if(dp[ind][amt] != -1) return dp[ind][amt];

        int np = 0 + solve(ind-1, coins, amt, dp);
        int p = 1e9;
        if(coins[ind] <= amt){
            p = 1 + solve(ind, coins, amt - coins[ind], dp);
        }

        return dp[ind][amt] = min(p, np);
    }

};