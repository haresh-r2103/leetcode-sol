class Solution {
public:
    int maxArea(vector<int>& height) {
        int m = 0, l = 0, r = height.size()-1;
        while(l<r){
            int c = min(height[l], height[r]) * (r-l);
            m = max(m, c);


            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }   
        return m;
    }
};