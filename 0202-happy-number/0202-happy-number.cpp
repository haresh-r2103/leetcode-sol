class Solution {
public:
    int get_next(int n){
        int s = 0;
        while(n){
            int t = n % 10;
            s = s + (t * t);
            n /= 10;
        }
        return s;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = get_next(n);

        while(fast != 1 && slow != fast){
            slow = get_next(slow);
            fast = get_next(get_next(fast));
        }
        return fast == 1;
    }
};