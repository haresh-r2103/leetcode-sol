class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int l = 1, r = n-2;

        
        while(l<=r){
            int m = l + (r - l) / 2;
            if(arr[m-1] < arr[m] && arr[m] > arr[m+1]){
                return m;
            }
            else if(arr[m-1] <arr[m]){
                
                l = m + 1;
            }
            else{
                r = m -1;
            }
        }
        return -1;
        
        
        
    }
};