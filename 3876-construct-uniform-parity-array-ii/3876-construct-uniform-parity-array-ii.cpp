class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minOdd = INT_MAX;
        // smallest odd element find karo
        for (int x : nums1) {
            if (x % 2 != 0) {
                minOdd = min(minOdd, x);
            }
        }
        // check if any even element is smaller than minOdd
        for (int x : nums1) {
            if (x % 2 == 0 && minOdd != INT_MAX && x < minOdd) {
                return false;
            }
        }
        return true;
    }
};