class Solution {
public:
    string countAndSay(int n) {
        string current = "1";
        // Generate terms from 2 to n
        for (int step = 1; step < n; ++step) {
            string nextTerm = "";
            int len = current.length();
            for (int i = 0; i < len; ++i) {
                int count = 1;
                // Count consecutive identical characters
                while (i + 1 < len && current[i] == current[i + 1]) {
                    ++count;
                    ++i;
                }
                // Append the count followed by the digit
                nextTerm += to_string(count) + current[i];
            }
            current = nextTerm;
        }
        return current;
    }
};
