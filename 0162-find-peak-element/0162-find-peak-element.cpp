class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, h = nums.size()-1;
        int ans;
        int mid;
        while(l<=h){
            mid = l+(h-l)/2;
            if(mid < nums.size()-1 && nums[mid]<nums[mid+1]){
                l = mid+1;
            }
            else if(mid > 0 && nums[mid]<nums[mid-1]){
                h = mid-1;
            }
            else{
                ans = mid;
                break;
            }
        }
        return ans;
    }
};