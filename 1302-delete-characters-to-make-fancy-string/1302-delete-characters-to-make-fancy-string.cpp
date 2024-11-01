class Solution {
public:
    string makeFancyString(string s) {
        stack<char> st;
        string ans = "";
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                ans += s[i];
                st.push(s[i]);
            }
            else if(s[i] == st.top()){
                if(st.size()<2){
                    st.push(s[i]);
                    ans += s[i];
                }
                
            }
            else{
                while(!st.empty()){
                    st.pop();
                }
                ans += s[i];
                st.push(s[i]);
            }
        }
        return ans;
    }
};