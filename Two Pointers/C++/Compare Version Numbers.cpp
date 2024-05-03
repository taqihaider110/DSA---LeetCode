#include <vector>
#include <string>
#include <sstream>
#include <iostream>

// Class to compare version numbers
class Solution {
private:
    // Function to split a version string into a vector of integers
    std::vector<int> getList(const std::string& version) {
        std::vector<int> result;  // Vector to store the revisions
        std::stringstream ss(version);  // Create a string stream with the input version
        std::string item;  // Temporary string to store each split item

        // Split the version string on '.' and convert each part to an integer
        while (std::getline(ss, item, '.')) {
            result.push_back(std::stoi(item));  // Convert to integer and add to the result
        }

        return result;  // Return the vector of integers
    }

public:
    // Function to compare two version numbers
    int compareVersion(const std::string& version1, const std::string& version2) {
        // Get the list of revisions for both versions
        std::vector<int> v1 = getList(version1);  // Convert version1 to a list of integers
        std::vector<int> v2 = getList(version2);  // Convert version2 to a list of integers

        // Balance the length of v1 and v2 by appending zeros if needed
        if (v1.size() < v2.size()) {
            v1.resize(v2.size(), 0);  // If v1 is shorter, add zeros to match v2
        } else if (v1.size() > v2.size()) {
            v2.resize(v1.size(), 0);  // If v1 is longer, add zeros to match v1
        }

        // Compare corresponding revisions
        for (size_t i = 0; i < v1.size(); ++i) {  // Iterate over each revision
            if (v1[i] < v2[i]) {  // If v1 is smaller at this index
                return -1;  // Return -1 indicating version1 is smaller
            } else if (v1[i] > v2[i]) {  // If v1 is larger at this index
                return 1;  // Return 1 indicating version1 is greater
            }
        }

        // If all revisions are equal
        return 0;  // Return 0 indicating both versions are equal
    }
};

int main() {
    Solution solution;  // Create an instance of Solution
    
    // Test cases to validate the compareVersion function
    std::cout << "Compare 1.01 with 1.001: " 
              << solution.compareVersion("1.01", "1.001") << std::endl;  // Output: 0
    
    std::cout << "Compare 1.0 with 1.0.0: " 
              << solution.compareVersion("1.0", "1.0.0") << std::endl;  // Output: 0
    
    std::cout << "Compare 0.1 with 1.1: " 
              << solution.compareVersion("0.1", "1.1") << std::endl;  // Output: -1
    
    return 0;  // Return success code
}
