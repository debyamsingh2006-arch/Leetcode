class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            
            // 0 se i tak maximum
            int max_num = nums[0];
            for(int j = 0; j <= i; j++) {
                max_num = max(max_num, nums[j]);
            }
            
            // i se n-1 tak minimum
            int min_num = nums[i];
            
            for(int j = i; j < n; j++) {
                min_num = min(min_num, nums[j]);
            }
            
            // instability score
            int stable = max_num - min_num;
            
            if(stable <= k) {
                return i;
            }
        }
    
        return -1;
    }
};