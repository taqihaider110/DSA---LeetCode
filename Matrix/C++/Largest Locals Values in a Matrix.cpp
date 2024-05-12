#include <vector>
#include <algorithm> // For max function
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        // Initialize a result grid with dimensions (n-2) x (n-2)
        vector<vector<int>> result(n - 2, vector<int>(n - 2, 0));

        // Iterate over each cell in the grid to find the maximum value in its local 3x3 neighborhood
        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < n - 2; j++) {
                // Iterate over the local 3x3 neighborhood around the current cell
                for (int r = i; r < i + 3; r++) {
                    for (int c = j; c < j + 3; c++) {
                        // Update the maximum value in the neighborhood
                        result[i][j] = max(result[i][j], grid[r][c]);
                    }
                }
            }
        }

        return result; // Return the result grid containing the maximum values in the local neighborhoods
    }
};
// #include <vector>
// #include <algorithm> // For max function
// using namespace std;

// class Solution {
// public:
//     vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
//         int n = grid.size();
        
//         // Initialize a result grid with dimensions (n-2) x (n-2)
//         vector<vector<int>> result(n - 2, vector<int>(n - 2, 0));

//         // Iterate over each cell in the inner region of the grid
//         for (int x = 1; x < n - 1; ++x) {
//             for (int y = 1; y < n - 1; ++y) {
//                 // Calculate the maximum value in the 3x3 local neighborhood around the current cell
//                 result[x - 1][y - 1] = max({
//                     grid[x - 1][y - 1], grid[x - 1][y], grid[x - 1][y + 1],
//                     grid[x][y - 1],     grid[x][y],     grid[x][y + 1],
//                     grid[x + 1][y - 1], grid[x + 1][y], grid[x + 1][y + 1]
//                 });
//             }
//         }

//         // Return the result grid containing the maximum values in the local neighborhoods
//         return result;
//     }
// };
