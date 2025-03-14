class Solution {
public:
    void generateSubsets(int index, vector<vector<int>>& ans, vector<int>& nums, vector<int>& list) {
        if (index == nums.size()) {
            if (find(ans.begin(), ans.end(), list) == ans.end()) {
                ans.push_back(list);
            }
            return;
        }

        // Include the current element
        list.push_back(nums[index]);
        generateSubsets(index + 1, ans, nums, list);

        // Exclude the current element
        list.pop_back();
        generateSubsets(index + 1, ans, nums, list);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());  // Sort to handle duplicates properly
        vector<int> list;
        generateSubsets(0, ans, nums, list);
        return ans;
    }
};