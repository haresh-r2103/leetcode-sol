class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0, r = 0;
        int n = fruits.size();
        unordered_map<int, int> mpp;
        int ml = INT_MIN;
        while(r < n){
            mpp[fruits[r]]++;
            while(mpp.size() > 2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]] == 0){
                    mpp.erase(fruits[l]);
                }
                l++;
            }
            if(mpp.size() <= 2) ml = max(ml, r-l+1);
            r++;
        }
        return ml;
    }
};