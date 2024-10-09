class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int res = 0;
        for(auto x:s){
            if(x=='('){
                st.push(x);
            }
            else{
                if(st.empty()){
                    res++;
                }
                else{
                    st.pop();
                }
            }
        }
        int l = st.size();
        return (l+res);
    }
};