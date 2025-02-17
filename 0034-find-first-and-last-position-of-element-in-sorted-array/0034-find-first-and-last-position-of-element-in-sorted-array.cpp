class Solution {
public:
    int firstPos(vector<int>& nums, int target){
        int fp = -1;
      
        int s = 0, e = nums.size()-1;   
        while(s <= e){
            int m = s + (e-s)/2;
            if(nums[m]  == target){
                fp = m;
                e = m-1;
            }
            else if(nums[m] > target){
                e = m - 1;
            }
            else{
                s = m + 1;
            }
        }
        return fp;
    }
    int secondPos(vector<int>& nums, int target){
        int sp = -1;
        int s = 0, e = nums.size()-1;   
        while(s <= e){
            int m = s + (e-s)/2;
            if(nums[m]  == target){
                sp = m;
                s = m + 1;
            }
            else if(nums[m] > target){
                e = m - 1;
            }
            else{
                s = m + 1;
            }
        }
        return sp;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int fp = firstPos(nums, target);
        int sp = secondPos(nums, target);
        vector<int> ans;
        vector<int> illa = {-1, -1};
        int n = nums.size();
        if(n==0) return illa;
        else{
            ans.push_back(fp);
            ans.push_back(sp);
            return ans;
        }

        
    }
};