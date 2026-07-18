class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int so = 0, se = 0;

        int i = 1;
        while(n--){
            so += i;
            se += (i+1);
            i+=2;
        }

        return __gcd(so, se);
    }
};