class Solution {
public:
    int climbStairs(int n) {
        int p1 = 1, p = 1;
        for(int i=2;i<=n;i++){
            int c = p + p1;
            p1 = p;
            p = c;
        }
        return p;
    }
};