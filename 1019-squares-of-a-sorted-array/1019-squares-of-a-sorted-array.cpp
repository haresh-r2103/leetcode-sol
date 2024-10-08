class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        priority_queue<int> pq;
        for(auto x:nums){
            pq.push(x*x);
        }
        int i = nums.size()-1;
        while(!pq.empty()){
            nums[i] = pq.top();
            i--;
            pq.pop();
        }
        return nums;
    }
};