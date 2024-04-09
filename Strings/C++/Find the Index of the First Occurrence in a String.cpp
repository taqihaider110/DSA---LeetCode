// Find the Index of the First Occurrence in a String in C++- Leet Code Solution
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i <= haystack.size(); i++) {
            if (haystack.substr(i, needle.size()) == needle) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;

    // Test cases
    string haystack1 = "hello";
    string needle1 = "ll";
    cout << "Test Case 1: " << sol.strStr(haystack1, needle1) << endl;  // Output: 2

    string haystack2 = "aaaaa";
    string needle2 = "bba";
    cout << "Test Case 2: " << sol.strStr(haystack2, needle2) << endl;  // Output: -1

    string haystack3 = "";
    string needle3 = "";
    cout << "Test Case 3: " << sol.strStr(haystack3, needle3) << endl;  // Output: 0

    string haystack4 = "mississippi";
    string needle4 = "issip";
    cout << "Test Case 4: " << sol.strStr(haystack4, needle4) << endl;  // Output: 4

    return 0;
}
