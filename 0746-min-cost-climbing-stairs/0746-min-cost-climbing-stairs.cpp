class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size();
        vector<int> dp(n+1, -1);
        int fi = findCost(cost, 0, dp);
        int si = findCost(cost, 1, dp);
        return min(fi, si);
    }


    int findCost(vector<int>& cost, int ind, vector<int>& dp){
        if(ind >= cost.size()) return 0;

        if(dp[ind] != -1) return dp[ind];
        return dp[ind] = cost[ind] + min(findCost(cost, ind+1, dp), findCost(cost, ind+2, dp));
        

    }

};