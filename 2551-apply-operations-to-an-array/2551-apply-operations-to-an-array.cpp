class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i=0, j = 1;
        int c = 0;
        while(j<nums.size()){
            if(nums[i] == nums[j]){
                nums[i] *= 2;
                nums[j] = 0;
            }
            i++;
            j++;
        }
        vector<int> ans;
        for(auto x: nums){
            if(x != 0){
                ans.push_back(x);
            }
            else c++;
        }
        while(c!=0){
            ans.push_back(0);
            c--;
        }
        return ans;

    }
};