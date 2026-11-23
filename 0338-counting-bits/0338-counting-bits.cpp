class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            // i >> 1 shifts out the rightmost bit (equivalent to i / 2)
            // (i & 1) checks if that removed rightmost bit was a 1
            ans[i] = ans[i >> 1] + (i & 1);
        }
        return ans;
    }
};
