class Solution {
public:
    bool checkPowersOfThree(int n) { return check(0, n); }

private:
    bool check(int power, int n) {
        if (n == 0) return true;

        if (pow(3, power) > n) return false;

        bool take = check(power + 1, n - pow(3, power));

        bool ntake = check(power + 1, n);

        return take || ntake;
    }
};