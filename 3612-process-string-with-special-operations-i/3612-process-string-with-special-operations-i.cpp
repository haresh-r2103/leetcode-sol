class Solution {
public:
    string processStr(string s) {
        vector<char> tmp;
        for(char t: s){
            if(t == '*'){
                if(tmp.size()){
                    tmp.pop_back();
                }
            } else if(t == '#'){
                vector<char> tt;

                for(char c: tmp){
                    tt.push_back(c);
                }
                for(char c: tt) tmp.push_back(c);
            } else if(t == '%'){
                reverse(tmp.begin(), tmp.end());
            } else{
                tmp.push_back(t);
            }
        }

        string ans;
        for(char c: tmp){
            ans += c;
        }
        return ans;
    }
};