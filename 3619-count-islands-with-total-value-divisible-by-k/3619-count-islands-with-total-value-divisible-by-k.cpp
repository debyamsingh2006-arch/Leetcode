class Solution {
private:
    int m, n;
    vector<int> dr = {-1, 1, 0, 0};
    vector<int> dc = {0, 0, -1, 1};

    void dfs(vector<vector<int>>& grid, int r, int c, long long& sum) {
        sum += grid[r][c];
        grid[r][c] = 0; // Mark current cell as visited
        
        for (int i = 0; i < 4; ++i) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if (nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] > 0) {
                dfs(grid, nr, nc, sum);
            }
        }
    }

public:
    int countIslands(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();
        int count = 0;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] > 0) {
                    long long island_sum = 0;
                    dfs(grid, i, j, island_sum);
                    
                    if (island_sum % k == 0) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};