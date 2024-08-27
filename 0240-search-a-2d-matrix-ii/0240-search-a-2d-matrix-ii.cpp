class Solution {
public:
    bool search(int target, vector<int>& matrix){
            int l = 0, r = matrix.size()-1;
            while(l<=r){
                int m = (l+r)/2;
                if(matrix[m]==target){
                    return true;
                }
                else if(matrix[m] < target){
                    l = m+1;
                }
                else{
                    r = m-1;
                }
            }
            return false;
        }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int p = 0;
        int i=0;
        int n = matrix.size();
        while(p<n){
            if(matrix[p][0]==target) return true;
            else if(matrix[p][0]>target){
                p++;
                break;
            }
            p++;
        }
        //if(p>=n-1) return false;
        
        for(int i = 0;i<p;i++){
            if(search(target, matrix[i])){
                return true;
            }
        }
        return false;
        
        
    }
    
};