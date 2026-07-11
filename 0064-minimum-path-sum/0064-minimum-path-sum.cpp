class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return dfs(0, 0, grid, m, n, dp);
    }

    int dfs(int i, int j, vector<vector<int>>& grid, int m, int n, vector<vector<int>>& dp){
        // base case
        if(i == m-1 && j == n-1) return grid[i][j];
        if(dp[i][j] != -1) return dp[i][j];

        int down = INT_MAX, right = INT_MAX;
        if(i+1 < m) down = dfs(i+1, j, grid, m, n, dp);
        if(j+1 < n) right =  dfs(i, j+1, grid, m, n, dp);

        return dp[i][j] = grid[i][j] + min(down, right);

        
    }
};