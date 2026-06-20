class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mn = prices[0];
        int p = 0;
        for(int i = 1; i < n; ++i){
            int cost = prices[i] - mn;
            p = max(p, cost);
            mn = min(mn, prices[i]);
        }

        return p;
    }
};