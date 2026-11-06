class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> pairs;
        // Store each score along with its original index
        for (int i = 0; i < n; ++i) {
            pairs.push_back({score[i], i});
        }
        // Sort pairs in descending order based on the score
        sort(pairs.rbegin(), pairs.rend());
        
        vector<string> ans(n);

        // Assign ranks
        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                ans[pairs[i].second] = "Gold Medal";
            } else if (i == 1) {
                ans[pairs[i].second] = "Silver Medal";
            } else if (i == 2) {
                ans[pairs[i].second] = "Bronze Medal";
            } else {
                ans[pairs[i].second] = to_string(i + 1);
            }
        }
        
        return ans;
    }
};