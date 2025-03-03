class Solution {
public:
    int c = 0;
    int findTargetSumWays(vector<int>& nums, int target) {
        dynaPro(0, nums, 0, target);
        return c;
    }
private:
    void dynaPro(int ind, vector<int>& nums, int total, int target){
        //base case
        if(ind == nums.size()){
            if(total == target){
                c++;
            }
        }
        else{
            dynaPro(ind+1, nums, total + nums[ind] , target);
            dynaPro(ind+1, nums, total - nums[ind] , target);
        }
    }
};