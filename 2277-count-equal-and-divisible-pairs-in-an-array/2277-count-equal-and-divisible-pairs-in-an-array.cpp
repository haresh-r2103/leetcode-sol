class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int c = 0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]){
                    int t = i*j;
                    if(t%k == 0){
                        c++;
                    }
                }
            }
        }
        return c;
    }
};