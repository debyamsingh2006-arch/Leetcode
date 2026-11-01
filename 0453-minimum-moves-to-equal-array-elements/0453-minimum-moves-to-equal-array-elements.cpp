class Solution {
public:
    int minMoves(vector<int>& nums) {
       const int mn = std::ranges::min(nums);
        return std::accumulate(nums.begin(), nums.end(), 0, [&](int acc, int num) {
            return acc + (num - mn);
        }); 
    }
};