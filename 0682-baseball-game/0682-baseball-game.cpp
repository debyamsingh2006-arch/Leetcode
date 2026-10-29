class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        for (const string& op : operations) {
            if (op == "+") {
                // Record the sum of the last two valid scores
                scores.push_back(scores[scores.size() - 1] + scores[scores.size() - 2]);
            } else if (op == "D") {
                // Record double the last valid score
                scores.push_back(scores.back() * 2);
            } else if (op == "C") {
                // Invalidate and remove the last valid score
                scores.pop_back();
            } else {
                // Parse the string into an integer and record it
                scores.push_back(stoi(op));
            }
        }
        // Sum up all elements in the vector
        return accumulate(scores.begin(), scores.end(), 0);
    }
};