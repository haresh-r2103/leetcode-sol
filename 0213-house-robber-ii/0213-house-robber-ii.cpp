class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int> tmp1, tmp2;

        for(int i = 0; i < n; ++i){
            if(i != 0) tmp1.push_back(nums[i]);
            if(i != n-1) tmp2.push_back(nums[i]);
        }

        return max(robPrev(tmp1), robPrev(tmp2));
    }
    int robPrev(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[0];
        int prev2 = 0;

        for(int i = 1; i < n; ++i){
            int take = nums[i];
            if(i > 1) take += prev2;
            int ntake = prev;

            int curr = max(take, ntake);
            prev2 = prev;
            prev = curr;
        }

        return prev;
    }
};