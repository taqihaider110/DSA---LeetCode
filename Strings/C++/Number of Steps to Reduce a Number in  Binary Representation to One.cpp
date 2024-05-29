#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    // Function to count the number of steps to reduce binary string `s` to "1"
    int numSteps(string s) {
        int count = 0; // Initialize step counter

        // Loop until the binary string `s` becomes "1"
        while (s != "1") {
            // Check if the last character of the string is '0'
            if (s.back() == '0') {
                // If the last character is '0', the number is even
                // Simulate division by 2 by removing the last character
                s.pop_back();
            } else {
                // If the last character is '1', the number is odd
                // We need to add 1 to the number
                int i = s.size() - 1; // Start from the last character
                
                // Traverse from the end of the string towards the beginning
                // Change all trailing '1's to '0's to simulate the addition of 1
                while (i >= 0 && s[i] == '1') {
                    s[i] = '0'; // Change '1' to '0'
                    i--; // Move to the previous character
                }
                
                // If we find a '0', change it to '1' to complete the addition
                if (i >= 0) {
                    s[i] = '1';
                } else {
                    // If all characters were '1', we need to add a new '1' at the beginning
                    s = "1" + s;
                }
            }
            // Increment the step counter after each operation
            count++;
        }

        // Return the total number of steps required to reduce `s` to "1"
        return count;
    }
};

int main() {
    Solution sol;
    string s = "1101";  // Example binary string
    cout << sol.numSteps(s) << endl;  // Should print the number of steps
    return 0;
}
