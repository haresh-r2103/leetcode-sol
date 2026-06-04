class Solution {
public:

    int count(int num){
        vector<int> t;
        while(num){
            int tmp = num % 10;
            t.push_back(tmp);
            num /= 10;
        }
        reverse(t.begin(), t.end());

        int n = t.size();
        if(n < 3) return 0;

        int c = 0;
        int j = 1;
        while(j < n-1){
            if((t[j] > t[j-1] && t[j] > t[j+1]) || (t[j] < t[j-1] && t[j] < t[j+1])){
                c++;
            }
            j++;
        }
        return c;
    }
    int totalWaviness(int num1, int num2) {
        int c = 0;
        for(int i = num1; i <= num2; ++i){
            c += count(i);
        }    
        return c;
    }
};