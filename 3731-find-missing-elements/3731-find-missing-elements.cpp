class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int, int> mpp;

        for(int x: nums){
            mpp[x]++;
        }

        sort(nums.begin(), nums.end());
        int l = nums[0], r = nums[n-1];
        for(int i = l; i <= r; ++i){
            if(mpp.find(i) == mpp.end()){
                ans.push_back(i);
            }
        }

        return ans;

        return ans;
    }
};