class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        // If all elements are greater than or equal to n
        if (nums[0] >= n) return n;
        for (int i = 1; i < n; ++i) {
            int count = n - i; // Number of elements >= nums[i]
            if (nums[i] >= count && nums[i - 1] < count) {
                return count;
            }
        }
        return -1;
    }
};