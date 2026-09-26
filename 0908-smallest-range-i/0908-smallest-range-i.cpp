class Solution {
public:
    int smallestRangeI(std::vector<int>& nums, int k) {
        int mx = *std::max_element(nums.begin(), nums.end());
        int mn = *std::min_element(nums.begin(), nums.end());
        return std::max(0, mx - mn - 2 * k);
    }
};