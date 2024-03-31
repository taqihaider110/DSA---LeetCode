class Solution {
public:
    int minSteps(string s, string t) {
        // Create an unordered map to store the count of characters in string s
        unordered_map<char, int> m;
        
        // Populate the map with counts of characters in string s
        for (char c : s) {
            m[c]++;
        }
        
        // Iterate through string t and adjust the counts in the map
        // by decrementing for each character found in t
        for (char c : t) {
            m[c]--;
        }
        
        // Initialize a variable to store the total steps required
        int steps = 0;
        
        // Iterate through the map to calculate the total steps required
        for (auto it : m) {
            // Add the absolute value of the count of each character
            // to the total steps
            steps += abs(it.second);
        }
        
        // Divide the total steps by 2 since we're counting absolute differences
        // and only need to make one string an anagram of the other
        return steps/2;
    }
};
