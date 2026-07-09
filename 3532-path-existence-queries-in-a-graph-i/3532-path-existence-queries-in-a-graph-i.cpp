class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
    
        vector<int> tmp(n, 0);
        vector<bool> ans;
        int cnt = 0;

        for(int i = 1; i < n; ++i){
            if(nums[i] - nums[i-1] > maxDiff){
                cnt++;
            }
            tmp[i] = cnt;
        }

        for(auto& q: queries){
            int si = q[0];
            int ei = q[1];
            ans.push_back(tmp[si] == tmp[ei]);
        }

        return ans;
    }
};