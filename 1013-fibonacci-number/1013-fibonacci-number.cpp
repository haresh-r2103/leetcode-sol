class Solution {
public:
    int fib(int n) {
        vector<int> dp(n+1, -1);
        return findFib(dp, n);
    }
    int findFib(vector<int>& dp, int n){
        if(n <= 1) return n;

        if(dp[n] != -1) return dp[n];

        return dp[n] = findFib(dp, n-1) + findFib(dp, n-2); 
    }
};