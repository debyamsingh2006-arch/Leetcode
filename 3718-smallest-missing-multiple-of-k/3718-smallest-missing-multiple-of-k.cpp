class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int i=1;
        int elem = k;
        while(true){
            auto it = find(nums.begin(), nums.end(), elem);
            if (it == nums.end()) {
                return elem;
                break;
            }    
            i++;
            elem = k*i;
        }
    }
};