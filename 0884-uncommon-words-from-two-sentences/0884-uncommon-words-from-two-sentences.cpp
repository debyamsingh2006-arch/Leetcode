class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> count;
        // Combine both sentences and split by whitespace using istringstream
        istringstream ss(s1 + " " + s2);
        string word;
        while (ss >> word) {
            count[word]++;
        }
        vector<string> result;
        // Collect words that appeared exactly once in total
        for (const auto& [w, freq] : count) {
            if (freq == 1) {
                result.push_back(w);
            }
        }
        return result;
    }
};
