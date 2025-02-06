
class Solution {
public:
    int tupleSameProduct(std::vector<int>& nums) {
        unordered_map<int, int> productCount;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int product = nums[i] * nums[j];
                productCount[product]++;
            }
        }

        
        int result = 0;
        for (const auto& entry : productCount) {
            int count = entry.second;
            if (count > 1) {
                result += count * (count - 1) * 4; 
            }
        }

        return result;
    }
};