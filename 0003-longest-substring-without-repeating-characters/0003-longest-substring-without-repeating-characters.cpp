class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0, r = 0;
        vector<int> mpp(256, -1);
        int ml = 0;
        while(r < n){
            if(mpp[s[r]] != -1){
                l = max(l, mpp[s[r]] + 1);
            }
            int tl = r - l + 1;
            ml = max(ml, tl);
            mpp[s[r]] = r;
            r++;
        }
        return ml;

    }
};