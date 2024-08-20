class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        map<int, int> m;
        for(int i=n-1;i>-1;i--){
            m[nums[i]]++;
        }
        int ans;
        for(auto& it:m){
            if(it.second == 1){
                ans = it.first;
            }
        }
        return ans;
        
        
    }
};