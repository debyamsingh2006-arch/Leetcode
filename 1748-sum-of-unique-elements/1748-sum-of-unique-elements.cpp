class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       int sum=0,n=nums.size();
       
        for(int i=0;i<n;i++){
            if ( count(nums.begin(),nums.end(),nums[i])==1 ){
                sum+=nums[i];
            }
        }

        return sum; 
    }
};