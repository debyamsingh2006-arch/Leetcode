class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // int n=nums.size();
        // int a = nums[n-1]*nums[n-2]*nums[n-3];
        // int b = nums[n-1]*nums[0]*nums[1];
        return max(nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3],nums[nums.size()-1]*nums[0]*nums[1]);
    }
};