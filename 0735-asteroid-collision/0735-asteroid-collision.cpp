class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for(int as: asteroids){
            if(as > 0) st.push(as);
            else {
                while(!st.empty() && st.top() > 0 && st.top() < abs(as)) st.pop();
                if(st.empty() || st.top() < -as) st.push(as);
                else if(!st.empty() && st.top() == abs(as)) st.pop();
            }
        }

        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};