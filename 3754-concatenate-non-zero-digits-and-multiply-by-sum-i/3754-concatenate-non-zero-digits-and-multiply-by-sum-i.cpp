class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<long long> t;
        while(n){
            long long tmp = n % 10;
            if(tmp != 0){
                t.push_back(tmp);
            }
            n /= 10;
        }

        if(!t.size()) return 0;

        reverse(t.begin(), t.end());
        int ans = 0, s = 0;
        for(int num: t){
            ans = (ans*10) + num;
            s += num;
        }

        return (long long) ans*s;
    }
};