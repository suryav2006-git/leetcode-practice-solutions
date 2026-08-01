class Solution(object):
    def bfs(self, row, col, vis, grid):
        vis[row][col] = 1
        q = deque([(row, col)])
        n, m = len(grid), len(grid[0])
        
        del_row = [-1, 0, 1, 0]
        del_col = [0, 1, 0, -1]
        
        while q:
            curr_row, curr_col = q.popleft()
            for i in range(4):
                nrow = curr_row + del_row[i]
                ncol = curr_col + del_col[i]
                
                if (0 <= nrow < n and 0 <= ncol < m and 
                    grid[nrow][ncol] == '1' and vis[nrow][ncol] == 0):
                    vis[nrow][ncol] = 1
                    q.append((nrow, ncol))

    def numIslands(self, grid):
        if not grid: return 0
        n, m = len(grid), len(grid[0])
        count = 0
        vis = [[0] * m for _ in range(n)]
        
        for r in range(n):
            for c in range(m):
                if vis[r][c] == 0 and grid[r][c] == '1':
                    count += 1
                    self.bfs(r, c, vis, grid)
        return count