#include <vector>

class Solution {
public:
    int numIdenticalPairs(std::vector<int>& nums) {
        int count[101] = {0}; 
        int goodPairs = 0;
        for (int num : nums) {
            // If the number has appeared 'count[num]' times before,
            // seeing it again adds that many new pairs.
            goodPairs += count[num];
            // Increment the count for this number
            count[num]++;
        }
        return goodPairs;
    }
};