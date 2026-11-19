class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        // Case 1: Change the two smallest elements to match nums[2]
        int changeTwoSmallest = nums[n - 1] - nums[2];

        // Case 2: Change the two largest elements to match nums[n - 3]
        int changeTwoLargest = nums[n - 3] - nums[0];

        // Case 3: Change the smallest to nums[1] and largest to nums[n - 2]
        int changeOneEach = nums[n - 2] - nums[1];

        return min({changeTwoSmallest, changeTwoLargest, changeOneEach});
    }
};