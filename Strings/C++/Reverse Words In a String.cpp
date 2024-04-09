#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word;
        // Split the string into words
        for (char c : s) {
            if (c != ' ') {
                word += c;
            } else if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
        if (!word.empty()) {
            words.push_back(word);
        }
        reverse(words.begin(), words.end()); // Reverse the order of words
        string result;
        // Concatenate words to form the reversed string
        for (string w : words) {
            result += w + " ";
        }
        if (!result.empty()) {
            result.pop_back();
        }
        return result;
    }
};

int main() {
    Solution solution;
    string input = "Hello World";
    string reversed = solution.reverseWords(input);
    cout << "Reversed: " << reversed << endl; // Output: "World Hello"
    return 0;
}
