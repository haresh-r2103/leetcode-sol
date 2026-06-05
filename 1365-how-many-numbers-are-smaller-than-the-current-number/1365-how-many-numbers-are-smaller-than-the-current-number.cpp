class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> t = nums;
        sort(t.begin(), t.end());
        unordered_map<int, int> mpp;

        for(int i = 0; i < t.size(); ++i){
            if(mpp.find(t[i]) == mpp.end()){
                mpp[t[i]] = i;
            }
        }

        vector<int> ans;
        for(int x: nums){
            ans.push_back(mpp[x]);
        }

        return ans;

    }
};