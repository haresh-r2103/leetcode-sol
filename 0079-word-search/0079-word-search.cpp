class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(dfs(i, j, board, word, 0, n, m)) return true;
            }
        }

        return false;
    }

    bool dfs(int i, int j, vector<vector<char>>& board, string word, int k, int n, int m){
        if(k == word.size()) return true;
        if(i < 0 || j < 0 || i == n || j == m || board[i][j] != word[k]) return false;

        char tmp = board[i][j];
        board[i][j] = '#';

        bool op1 = dfs(i-1, j, board, word, k+1, n, m);
        bool op2 = dfs(i, j-1, board, word, k+1, n, m);
        bool op3 = dfs(i+1, j, board, word, k+1, n, m);
        bool op4 = dfs(i, j+1, board, word, k+1, n, m);

        board[i][j] = tmp;

        return op1 || op2 || op3 || op4;
    }
};