class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0,acc_sum=0;;
        for (size_t i = 0; i < accounts.size(); ++i) {
            for (size_t j = 0; j < accounts[i].size(); ++j) {
                acc_sum += accounts[i][j] ;
                if(acc_sum >= sum){
                    sum = acc_sum;
                }
            }
            acc_sum=0;
        }
        return sum;
    }
};