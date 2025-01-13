class Solution {
public:
    int minimumLength(string s) {
        int n = s.length();
        vector<int> charmap(26,0);
        for(auto ch : s) charmap[ch-'a']++;

        int cnt = 0;
        for(int i = 0; i < 26; i++){
            if(charmap[i]<3) continue;
            if(charmap[i]%2){
                cnt += charmap[i]-1;
            }
            else cnt += charmap[i]-2;
        }     
        return n-cnt;
}
};