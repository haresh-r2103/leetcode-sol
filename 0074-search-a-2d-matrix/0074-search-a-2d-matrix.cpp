class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int n = matrix.size(), in = matrix[0].size();
        int c = -1;
        while(i<n){
            if(matrix[i][in-1]==target){
                return true;
            }
            else if(matrix[i][in-1] > target){
                c = i;
                break;
            }
            else i++;
        }
        if(c<0) return false;        
        else if(matrix[0].size()<=1){
            return false;
        }
        else{
            int l=0, r = matrix[0].size()-1;
            while(l<=r){
                int m = (l+r)/2;
                if(target == matrix[i][m]){
                    return true;
                }
                else if(matrix[i][m] < target){
                    l = m+1;
                }
                else{
                    r = m-1;
                }
            }
            return false;
        }

    }
};