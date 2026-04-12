class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st;
        int ml = 0;
        for(auto word: wordDict){
            st.insert(word);
            ml = max(ml, (int)word.length());
        }

        int n = s.length();
        vector<bool> dp(n+1, false);

        dp[0] = true;

        for(int i = 1; i <= n; ++i){
            for(int j = n-1; j >= max(0, i-ml); j--){
                if(dp[j] && st.find(s.substr(j, i-j)) != st.end()){
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];

        
    }
};