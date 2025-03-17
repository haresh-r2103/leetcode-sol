class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mpp;
        int t = n/2;
        int c = 0;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto &it: mpp){
            if(it.second % 2 != 0){
                return false;
            }
            else{
                c += it.second / 2;
            }
        }
        return c==t;
        
    }
};