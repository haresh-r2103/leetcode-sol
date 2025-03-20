class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0, sum = 0, min_len = INT_MAX;

        for (int right = 0; right < n; right++) {
            sum += nums[right]; // Expand the window by adding the right element

            // Shrink the window from the left if the current sum is >= target
            while (sum >= target) {
                min_len = min(min_len, right - left + 1);
                sum -= nums[left]; 
                left++;
            }
        }

        return min_len == INT_MAX ? 0 : min_len; 
    }
};
