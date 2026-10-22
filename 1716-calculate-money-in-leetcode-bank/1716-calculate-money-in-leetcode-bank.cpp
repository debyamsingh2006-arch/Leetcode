class Solution {
public:
    int totalMoney(int n) {
        int weeks = n / 7;
        int extra = n % 7;
        return 28 * weeks + 7 * weeks * (weeks - 1) / 2 + weeks * extra + extra * (extra + 1) / 2;
    }
};