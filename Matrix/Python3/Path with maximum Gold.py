class Solution:
    def getMaximumGold(self, grid: List[List[int]]) -> int:
        rows, cols = len(grid), len(grid[0])

        def dfs(r, c):
            # Check if the current position is out of bounds or the cell contains 0 (no gold)
            if (
                r < 0 or c < 0 or r >= rows or c >= cols or
                grid[r][c] == 0
            ):
                return 0

            # Temporarily store the value of the current cell and mark it as visited
            tmp = grid[r][c]
            grid[r][c] = 0  # Mark as visited by setting it to 0

            # Initialize the result for the current DFS path
            res = 0

            # Define the possible directions to move: down, up, right, and left
            neighbors = [[r + 1, c], [r - 1, c], [r, c + 1], [r, c - 1]]
            
            # Explore all four directions
            for r2, c2 in neighbors:
                # Recursively apply DFS and update the result with the maximum gold collected
                res = max(res, tmp + dfs(r2, c2))

            # Restore the current cell's value (unmark it)
            grid[r][c] = tmp

            # Return the maximum gold collected from this path
            return res

        # Initialize the result to store the maximum gold collected
        res = 0
        
        # Iterate over every cell in the grid
        for r in range(rows):
            for c in range(cols):
                # If the cell has gold, start DFS from there and update the result
                res = max(res, dfs(r, c))

        # Return the maximum gold collected from all possible paths
        return res
