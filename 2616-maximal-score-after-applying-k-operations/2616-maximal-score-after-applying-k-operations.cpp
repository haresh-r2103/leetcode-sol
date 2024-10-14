class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long s = 0;  // Initialize sum to 0

        priority_queue<int> pq;
        for(auto x:nums){
            pq.push(x);
        }

        while(k--){
            int t = pq.top();
            s += t;
            pq.pop();
            pq.push(ceil(t / 3.0));
        }

        return s;
    }
};