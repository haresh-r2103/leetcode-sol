class Solution {
public:
    int findProd(int n){
        int p = 1;
        while(n){
            p *= n % 10;
            n /= 10;
        }

        return p;
    }
    int smallestNumber(int n, int t) {
        for(int i = n; i <= 100; ++i){
            int p = findProd(i);
            if(p % t == 0) return i;
        }

        return -1;
    }
};