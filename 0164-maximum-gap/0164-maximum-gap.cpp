class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int i=0, j=1;
        int md = INT_MIN;
        while(j<nums.size()){
            int t = nums[j] - nums[i];
            md = max(md, t);
            i++;
            j++;
        }
        return md;
        
    }
};