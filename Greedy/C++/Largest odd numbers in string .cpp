#include<iostream>
#include <cstring>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        int s = num.length();
        for (int i = s-1; i >=0; i--) {
            if (num[i] % 2 != 0) {
                return num.substr(0,i+1);// Return the substring containing the largest odd number
            }
        }
        return "";// Return an empty string if no odd digits were found
    }
};
int main() {
    Solution sol;
    std::cout << sol.largestOddNumber("52") << std::endl;      // Output: "5"
    std::cout << sol.largestOddNumber("4206") << std::endl;    // Output: ""
    std::cout << sol.largestOddNumber("35427") << std::endl;   // Output: "35427"
    return 0;
}
// 155/196 