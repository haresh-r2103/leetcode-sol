class Solution {
public:
    int numDecodings(string s) {
        vector<int> dp(s.length(), -1);
        return solve(0, dp, s);
    }

    int solve(int ind, vector<int>& dp, string& s){
        if(ind == s.length()) return 1;
        if(s[ind] == '0') return 0;

        if(dp[ind] != -1) return dp[ind];

        int ways = solve(ind+1, dp, s);

        if(ind+1 < s.length() && (s[ind] == '1' || (s[ind] == '2' && s[ind+1] <= '6'))){
            ways += solve(ind+2, dp, s);
        }

        return dp[ind] = ways;
    }
};