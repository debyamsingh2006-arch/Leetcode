class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool is_increasing = true;
        bool is_decreasing = true;
        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] < nums[i - 1]) {
                is_increasing = false;
            }
            if (nums[i] > nums[i - 1]) {
                is_decreasing = false;
            }
            if (!is_increasing && !is_decreasing) {
                return false;
            }
        }
        return true;
    }
};