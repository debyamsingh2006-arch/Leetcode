class Solution {
public:
    int maximum69Number (int num) {
        std::string s = std::to_string(num); // Convert integer to string [0.1.3]
        for (char& ch : s) {
            if (ch == '6') {
                ch = '9'; // Change the first '6' to '9' [0.1.3]
                break;    // Stop after the first change [0.1.3]
            }
        }
        return std::stoi(s);
    }
};