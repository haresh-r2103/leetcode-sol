class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int i = 0;
        int j = 1;

        int s = target.size();
        vector<string> ans;


        while(i < s){
            if(target[i] == j){
                ans.push_back("Push");
                i++;
                j++;
            } else{
                ans.push_back("Push");
                ans.push_back("Pop");
                j++;
            }
        }
        return ans;
    }
};