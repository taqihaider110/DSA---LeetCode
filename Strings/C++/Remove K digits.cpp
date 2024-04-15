class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<char> s; // Use vector instead of stack

        for (char c : num) {
            while (!s.empty() && k > 0 && s.back() > c) {
                s.pop_back(); // Pop from the back of the vector
                k--;
            }
            s.push_back(c); // Push to the back of the vector
        }
        
        // Remove remaining digits if k > 0
        s.resize(s.size() - k); // Remove k digits from the end

        // Construct the result string directly from the vector
        string res;
        for (char digit : s) {
            if (!(res.empty() && digit == '0')) { // Skip leading zeros
                res.push_back(digit);
            }
        }

        // Return "0" if result string is empty
        return res.empty() ? "0" : res;
    }
};
