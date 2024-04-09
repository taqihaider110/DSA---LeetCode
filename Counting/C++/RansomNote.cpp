class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> charCount;
        
        // Count the occurrences of each character in magazine
        for (char ch : magazine) {
            charCount[ch]++;
        }
        
        // Check if each character in ransomNote is present in magazine with sufficient count
        for (char ch : ransomNote) {
            if (charCount[ch] > 0) {
                charCount[ch]--;
            } else {
                return false; // If any character is not present or its count is insufficient, return false
            }
        }
        
        return true; // If all characters are present with sufficient count, return true
    }
};
