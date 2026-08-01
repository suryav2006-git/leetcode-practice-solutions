class Solution(object):
    def bfs(self, start_row, start_col, vis, grid):
        vis[start_row][start_col] = 1
        q = deque([(start_row, start_col)])
        
        n = len(grid)
        m = len(grid[0])
        
        del_row = [-1, 0, 1, 0]
        del_col = [0, 1, 0, -1]
        
        while q:
            row, col = q.popleft()
            
            for i in range(4):
                nrow = row + del_row[i]
                ncol = col + del_col[i]
                
                if (0 <= nrow < n and 0 <= ncol < m and 
                    grid[nrow][ncol] == '1' and vis[nrow][ncol] == 0):
                    vis[nrow][ncol] = 1
                    q.append((nrow, ncol))

    def numIslands(self, grid):
        if not grid:
            return 0
            
        n = len(grid)
        m = len(grid[0])
        count = 0
        
        vis = [[0] * m for _ in range(n)]
        
        for row in range(n):
            for col in range(m):
                if vis[row][col] == 0 and grid[row][col] == '1':
                    count += 1
                    self.bfs(row, col, vis, grid)
                    
        return count
