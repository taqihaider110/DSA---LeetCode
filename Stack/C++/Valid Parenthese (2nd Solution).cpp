class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        for (auto i : s) {
            if (i == '(' || i == '{' || i == '[') {
                str.push(i);
            } else if (!str.empty() && ((i == ')' && str.top() == '(') ||
                                        (i == '}' && str.top() == '{') ||
                                        (i == ']' && str.top() == '['))) {

                str.pop();
            } else {
                return false;
            }
        }
        return str.empty();
    }
};