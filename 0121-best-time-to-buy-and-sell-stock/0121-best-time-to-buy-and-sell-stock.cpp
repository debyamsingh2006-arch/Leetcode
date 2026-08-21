class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int small = prices[0];
        int profit = 0;

        for(int i = 1; i < prices.size(); i++) {

            if(prices[i] - small > profit) {
                profit = prices[i] - small;
            }

            if(prices[i] < small) {
                small = prices[i];
            }
        }

        return profit;
    }
};