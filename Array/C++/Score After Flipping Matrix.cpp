class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int result = 0;

        // Flip rows if necessary to ensure the leftmost column is all 1s
        for (int i = 0; i < n; ++i) {
            if (grid[i][0] == 0) {
                for (int val = 0; val < m; ++val) {
                    grid[i][val] = 1 - grid[i][val];
                }
            }
        }

        // Flip columns if necessary to maximize the score
        for (int col = 0; col < m; ++col) {
            int counter = 0;
            for (int row = 0; row < n; ++row) {
                counter += grid[row][col];
            }
            if (counter < n - counter) {
                for (int row = 0; row < n; ++row) {
                    grid[row][col] = 1 - grid[row][col];
                }
            }
        }

        // Calculate the score
        for (int row = 0; row < n; ++row) {
            for (int col = 0; col < m; ++col) {
                result += grid[row][col] * (1 << (m - col - 1));
            }
        }
        return result;
    }
};