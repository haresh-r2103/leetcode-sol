class Solution {
public:
    string decodeString(string s) {
        stack<int> cnts;
        stack<string> st;

        int num = 0;
        string curr = "";

        for(char ch: s){
            if(isdigit(ch)){
                num = num * 10 + (ch - '0');
            } else if(ch == '['){
                cnts.push(num);
                st.push(curr);
                num = 0;
                curr = "";
            } else if(ch == ']'){
                int k = cnts.top();
                cnts.pop();
                string prev = st.top();
                st.pop();

                while(k--){
                    prev += curr;
                }
                curr = prev;
            } else {
                curr += ch;
            }
        }

        return curr;
    }
};