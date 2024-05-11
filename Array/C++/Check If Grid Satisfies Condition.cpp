#include <iostream>
#include <vector>
#include<stdbool.h>
using namespace std;

class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int m = grid.size(); // number of rows
        int n = grid[0].size(); // number of columns
        bool isValid = true;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // Check if the cell below exists and if it's equal
                if (i < m - 1 && grid[i][j] != grid[i + 1][j]) {
                    isValid = false;
                    break;
                }
                // Check if the cell to the right exists and if it's different
                if (j < n - 1 && grid[i][j] == grid[i][j + 1]) {
                    isValid = false;
                    break;
                }
            }
            if (!isValid) {
                break;
            }
        }

        return isValid;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> grid1 = {{1,0,2},{1,0,2}};
    cout << "Output for grid1: " << sol.satisfiesConditions(grid1) << endl;
    
    vector<vector<int>> grid2 = {{1,1,1},{0,0,0}};
    cout << "Output for grid2: " << sol.satisfiesConditions(grid2) << endl;
    
    vector<vector<int>> grid3 = {{1},{2},{3}};
    cout << "Output for grid3: " << sol.satisfiesConditions(grid3) << endl;
    
    return 0;
}
