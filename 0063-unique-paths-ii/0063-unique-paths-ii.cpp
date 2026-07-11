class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return dfs(m-1, n-1, grid, m, n, dp);
    }

    int dfs(int i, int j, vector<vector<int>>& grid, int m, int n, vector<vector<int>>& dp){
        // base case
        if(i == 0 && j == 0 && grid[i][j] != 1) return 1;
        if(i < 0 || j < 0) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        int up = 0, left = 0;
        if(i > 0 || j > 0){
            if(grid[i][j] != 1){
                up = dfs(i-1, j, grid, m, n, dp);
                left = dfs(i, j-1, grid, m, n, dp);
            }
        }

        return dp[i][j] = up + left;
    }
};