class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        map<int, int> mpp;
        vector<int> v;
        int n = matrix.size();
        int ni = matrix[0].size();
        if(ni==1) return matrix[0][0];
        for(int i=0;i<n;i++){
            for(int j=0;j<ni;j++){
                v.emplace_back(matrix[i][j]);
            }
        }
        sort(v.begin(), v.end());
        return v[k-1];
        
    }
};