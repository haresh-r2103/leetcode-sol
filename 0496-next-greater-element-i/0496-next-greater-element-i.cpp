class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> st;
        unordered_map<int, int> mpp;
        int n1 = nums1.size(), n2 = nums2.size();
        mpp[nums2[n2-1]] = -1;
        st.push(nums2[n2-1]);


        for(int i = n2-2; i >= 0; --i){
            while(!st.empty() && st.top() < nums2[i]){
                st.pop();
            }

            if(st.empty()) mpp[nums2[i]] = -1;
            else mpp[nums2[i]] = max(nums2[i], st.top());
            st.push(nums2[i]);
        }

        for(int x: nums1) ans.push_back(mpp[x]);

        return ans;
    }
};