class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0) return 0;
        unordered_set<int> hashSet;
        for(int x:nums){
            hashSet.insert(x);
        }

        int ls = 1;
        for(int num:nums){
            if(hashSet.find(num-1) == hashSet.end()){
                int cn = num;
                int cs = 1;
                while(hashSet.find(cn+1)!=hashSet.end()){
                    cn++;
                    cs++;
                }
                ls = max(ls, cs);
            }
        }
        return ls;
    }
};