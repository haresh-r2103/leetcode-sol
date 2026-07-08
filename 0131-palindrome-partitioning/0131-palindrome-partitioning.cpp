class Solution {
public:
    vector<vector<string>> partition(string s) {
        int n = s.length();
        vector<vector<string>> ans;
        vector<string> t;
        dfs(0, s, ans, t, n);
        return ans;
    }

    void dfs(int ind, string &s, vector<vector<string>>& ans, vector<string>& t, int n){
        // base case
        if(ind == n){
            ans.push_back(t);
            return;
        }

        for(int i = ind; i < n; ++i){
            if(isPal(s, ind, i)){
                t.push_back(s.substr(ind, i-ind+1));
                dfs(i+1, s, ans, t, n);
                t.pop_back();
            }
        }
    }

    bool isPal(string t, int s, int e){
        while(s <= e){
            if(t[s++] != t[e--]) return false;
        }
        return true;
    }
};