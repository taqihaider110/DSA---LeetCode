#include <string>
#include <algorithm> // for std::reverse

class Solution {
public:
    std::string reversePrefix(std::string word, char ch) {
        // Find the index of the first occurrence of 'ch'
        size_t index = word.find(ch);

        // If 'ch' is found in the word, reverse the prefix up to and including that index
        if (index != std::string::npos) {
            // Reverse the substring from the beginning to the found index
            std::reverse(word.begin(), word.begin() + index + 1);
        }

        return word;
    }
};
