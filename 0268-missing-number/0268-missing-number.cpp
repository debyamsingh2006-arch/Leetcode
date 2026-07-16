class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,asum=nums.size();
        for (int i=0;i<asum;i++){
            sum+=nums[i];
        }
        int actual_sum=(asum*(asum+1))/2;
        return actual_sum-sum;
    }
};