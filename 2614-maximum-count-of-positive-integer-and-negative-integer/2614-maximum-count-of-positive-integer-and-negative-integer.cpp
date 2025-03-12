class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pc = 0, nc = 0;
        for(auto x:nums){
            if(x < 0) nc++;
            else if(x > 0) pc++;
        }
        return max(pc, nc);
    }
};