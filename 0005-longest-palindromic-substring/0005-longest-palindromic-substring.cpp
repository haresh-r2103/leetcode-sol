class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<bool>> dp(n, vector<bool>(n, false));

        int start = 0, ml = 1;
        for(int i = 0; i < n; ++i) dp[i][i] = true;

        for(int i = 0; i < n - 1; ++i){
            if(s[i] == s[i+1]){
                dp[i][i+1] = true;
                if(ml == 1){
                    start = i;
                    ml = 2;
                }
            }
        }

        for(int len = 3; len <= n; ++len){
            for(int i = 0; i <= n-len; ++i){
                int j = i + len - 1;
                if(dp[i+1][j-1] && s[i] == s[j]){
                    dp[i][j] = true;
                    if(len > ml){
                        ml = len;
                        start = i;
                    }
                }
            }
        }

        return s.substr(start, ml);
    }
};