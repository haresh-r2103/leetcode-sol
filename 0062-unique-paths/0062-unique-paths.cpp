class Solution {
public:
    int uniquePaths(int m, int n) {
        if(n == 1 && m == 1) return 1;
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return solve(0, 0, m, n, dp);
    }

    int solve(int r, int c, int m, int n, vector<vector<int>>& dp){
        if(r == m-1 && c == n-1) return 1;
        if(r >= m || c >= n) return 0;
        if(dp[r][c] != -1) return dp[r][c];


        int down = solve(r+1, c, m, n, dp);
        int right = solve(r, c+1, m, n, dp);


        return dp[r][c] = (down + right);
    }
};