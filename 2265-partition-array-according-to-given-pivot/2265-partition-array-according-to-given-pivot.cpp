class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> sm, gt;
        int c = 0;
        for(auto x:nums){
            if(x < pivot){
                sm.push_back(x);
            }
            else if(x > pivot){
                gt.push_back(x);
            }
            else{
                c++;
            }
        }
        vector<int> ans;
        int i=0, j=0;
        int sn = sm.size(), gn = gt.size();
        while(sn){
            ans.push_back(sm[i]);
            i++;
            sn--;
        }
        while(c){
            ans.push_back(pivot);
            c--;
        }
        while(gn){
            ans.push_back(gt[j]);
            j++;
            gn--;
        }
        return ans;
    }
};