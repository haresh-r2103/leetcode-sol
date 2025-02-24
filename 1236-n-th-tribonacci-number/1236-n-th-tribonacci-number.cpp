class Solution {
public:
    int tribonacci(int n) {
        if(n<2){
            return n;
        }
        if(n==2) return 1;
        int d = 0;
        int a = 0, b = 1, c = 1;
        int t = n-2;
        int i=0;
        while(i<t){
            d = a + b + c;
            a = b;
            b = c;
            c = d;
            i++;
        }
        return d;
    }
};