// 1st Method but Runtime issues.
// #include <vector>
// #include <algorithm>  // for max function
// #include <iostream>   // for input/output
// #include <cassert>    // for assertions (if needed)

// using namespace std;

// class Solution {
// public:
//     int candy(vector<int>& ratings) {
//         vector<int> arr(ratings.size(), 1);  // initialize all elements to 1

//         // Adjust candies based on left-to-right comparisons
//         for (size_t i = 1; i < ratings.size(); i++) {
//             if (ratings[i - 1] < ratings[i]) {
//                 arr[i] = arr[i - 1] + 1;
//             }
//         }

//         // Adjust candies based on right-to-left comparisons
//         for (int i = ratings.size() - 2; i >= 0; i--) {
//             if (ratings[i + 1] < ratings[i]) {
//                 arr[i] = max(arr[i + 1] + 1, arr[i]);
//             }
//         }

//         // Calculate the sum of all elements in arr
//         int sum = 0;
//         for (int i = 0; i < arr.size(); i++) {
//             sum += arr[i];
//         }

//         return sum;  // return the total sum of candies
//     }
// };

// int main() {
//     Solution s;
//     vector<int> ratings = {1, 2, 4, 5, 1};  // example ratings vector
//     vector<int> ratings1 = {1, 0 , 2};  // example ratings vector
//     vector<int> ratings2 = {1, 2, 2};  // example ratings vector
//     int result = s.candy(ratings);  // call the candy function
//     int result1 = s.candy(ratings1);  // call the candy function
//     int result2 = s.candy(ratings2);  // call the candy function

//     cout << "Total candies needed: " << result << endl;  // output the result
//     cout << "Total candies needed: " << result1 << endl;  // output the result
//     cout << "Total candies needed: " << result2 << endl;  // output the result

//     return 0;
// }

#include <vector>
#include <numeric> // for accumulate
#include <algorithm> // for max
#include <iostream> // for I/O

using namespace std;
class Solution {
public:
    int candy(vector<int>& ratings) {
        // Initialize an array with size equal to the ratings and all elements set to 1
        vector<int> arr(ratings.size(), 1);

        // Forward pass: Check from left to right, giving one more candy if the rating is greater
        for (int i = 1; i < ratings.size(); i++) {
            if (ratings[i - 1] < ratings[i]) {
                arr[i] = arr[i - 1] + 1;
            }
        }

        // Backward pass: Check from right to left, ensuring correct candy distribution
        for (int i = ratings.size() - 2; i >= 0; i--) {
            if (ratings[i + 1] < ratings[i]) {
                arr[i] = max(arr[i + 1] + 1, arr[i]);
            }
        }

        // Calculate the total number of candies required
        int sum = accumulate(arr.begin(), arr.end(), 0);

        return sum; // Return the total sum
    }
};

int main() {
    Solution s;

    // Test cases to validate the candy distribution logic
    vector<int> test1 = {1, 2, 2}; // Expected output: 4 (1, 2, 1)
    vector<int> test2 = {1, 0, 2}; // Expected output: 5 (2, 1, 2)
    vector<int> test3 = {1, 2, 4, 5, 1}; // Expected output: 11 (1, 2, 3, 4, 1)
    
    cout << "Test 1: " << s.candy(test1) << endl; // Should print 4
    cout << "Test 2: " << s.candy(test2) << endl; // Should print 5
    cout << "Test 3: " << s.candy(test3) << endl; // Should print 11

    return 0;
}
