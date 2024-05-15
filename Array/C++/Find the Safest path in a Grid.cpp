class Solution {
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        vector<vector<int>> safeness = calculateSafenessFactors(grid);
        int maxSafeness = findMaxSafeness(safeness);
        return findMaxSafenessFactor(grid, safeness, maxSafeness);
    }

private:
    vector<vector<int>> calculateSafenessFactors(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> safeness(n, vector<int>(n, INT_MAX));
        deque<pair<int, int>> queue;

        // Add all cells with gold to the queue and set their safeness to 0
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    queue.push_back({i, j});
                    safeness[i][j] = 0;
                }
            }
        }

        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        // Perform BFS to calculate safeness factors
        while (!queue.empty()) {
            auto [x, y] = queue.front();
            queue.pop_front();
            for (auto [dx, dy] : directions) {
                int newX = x + dx, newY = y + dy;
                if (0 <= newX && newX < n && 0 <= newY && newY < n && safeness[newX][newY] > safeness[x][y] + 1) {
                    safeness[newX][newY] = safeness[x][y] + 1;
                    queue.push_back({newX, newY});
                }
            }
        }

        return safeness;
    }

    int findMaxSafeness(vector<vector<int>>& safeness) {
        int maxSafeness = 0;
        for (const auto& row : safeness) {
            maxSafeness = max(maxSafeness, *max_element(row.begin(), row.end()));
        }
        return maxSafeness;
    }

    int findMaxSafenessFactor(vector<vector<int>>& grid, vector<vector<int>>& safeness, int maxSafeness) {
        int left = 0, right = maxSafeness, result = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canAchieveSafeness(grid, safeness, mid)) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    }

    bool canAchieveSafeness(vector<vector<int>>& grid, vector<vector<int>>& safeness, int threshold) {
        int n = grid.size();
        if (safeness[0][0] < threshold) {
            return false;
        }

        deque<pair<int, int>> queue = {{0, 0}};
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        visited[0][0] = true;

        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        while (!queue.empty()) {
            auto [x, y] = queue.front();
            queue.pop_front();
            if (x == n - 1 && y == n - 1) {
                return true;
            }

            for (auto [dx, dy] : directions) {
                int newX = x + dx, newY = y + dy;
                if (0 <= newX && newX < n && 0 <= newY && newY < n && !visited[newX][newY] && safeness[newX][newY] >= threshold) {
                    queue.push_back({newX, newY});
                    visited[newX][newY] = true;
                }
            }
        }

        return false;
    }
};