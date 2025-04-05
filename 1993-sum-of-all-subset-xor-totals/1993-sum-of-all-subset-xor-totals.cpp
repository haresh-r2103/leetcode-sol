class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> subsets;
        // Generate all of the subsets
        generateSubsets(nums, 0, {}, subsets);

        int result = 0;
        for (auto& subset : subsets) {
            int subsetXORTotal = 0;
            for (int num : subset) {
                subsetXORTotal ^= num;
            }
            result += subsetXORTotal;
        }
        return result;
    }
private:
    void generateSubsets(vector<int>& nums, int ind, vector<int> subset, vector<vector<int>>& subsets){
        if(ind == nums.size()){
            subsets.push_back(subset);
            return;
        }

        subset.push_back(nums[ind]);
        generateSubsets(nums, ind+1, subset, subsets);
        subset.pop_back();
        generateSubsets(nums, ind+1, subset, subsets);

    }
};