class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        while (left < right) {
            // If the left element is odd and right element is even, swap them
            if ((nums[left] % 2 != 0) && (nums[right] % 2 == 0)) {
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
            // If left is already even, move the left pointer forward
            if (nums[left] % 2 == 0) {
                left++;
            }
            // If right is already odd, move the right pointer backward
            if (nums[right] % 2 != 0) {
                right--;
            }
        }
        return nums;
    }
};