class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mpp;
        int n = nums.size();

        int ans = 1e9;

        for(int i = 0; i < n; ++i){
            mpp[nums[i]].push_back(i);
        }

        for(auto& it: mpp){
            if(it.second.size() >= 3){
                vector<int> v = it.second;
                int nt = it.second.size();
                int t = 0;
                for(int i = 0; i+2 < nt; ++i){
                    int dist = 2 * (v[i+2] - v[i]);
                    ans = min(ans, dist);
                }
            } 
        }

        return ans == 1e9 ? -1 : ans;
    }
};