class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int> mpp;
        vector<string> ans;
        stringstream ss1(s1);
        string w1;
        while (ss1 >> w1) {
            mpp[w1]++;
        }

        stringstream ss2(s2);
        string w2;
        while (ss2 >> w2) {
            mpp[w2]++;
        }
        for(const auto& y:mpp){
            if(y.second==1){
                ans.push_back(y.first);
            }
        }
        return ans;
    }
};