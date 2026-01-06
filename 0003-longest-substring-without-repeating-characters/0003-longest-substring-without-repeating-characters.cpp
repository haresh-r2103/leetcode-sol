class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int n = s.length();
        if(n == 0) return 0;
        int l = 0;
        int ans = INT_MIN;

        for(int r = 0; r < n; ++r){
            mpp[s[r]]++;
            while(mpp[s[r]] > 1){
                mpp[s[l]]--;
                l++;
            }
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};