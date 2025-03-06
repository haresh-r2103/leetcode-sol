class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int, int> mpp;
        int as = 0;
        int ts = 0;
        int n = grid.size() * grid.size();
        for(int i=1;i<=n;i++){
            as += i;
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                mpp[grid[i][j]]++;
            }
        }
        int a = -1, b = -1;
        for(auto &it: mpp){
            if(it.second == 2){
                a = it.first;
            }
            ts += it.first;
        }
        b = as - ts;
        return {a, b};
    }
};