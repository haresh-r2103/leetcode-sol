class Solution {
public:
    int maxProduct(int n) {
        int p = 1;
        vector<int> tmp;
        while(n){
            int t = n%10;
            tmp.push_back(t);
            n /= 10;
        }
        sort(tmp.begin(), tmp.end());
        int s = tmp.size();
        if(s == 1) return tmp[0];
        return (tmp[s-1] * tmp[s-2]);

    }
};