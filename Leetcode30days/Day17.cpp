class Solution {
public:
    int n, m;
    vector<vector<int>> dir{{1,  0}, {-1, 0}, {0,  1}, {0,  -1}};
    queue<pair<int, int>> q;
    
    void bfs(vector<vector<char>> &grid, int i, int j) {               
	    grid[i][j] = '0';
        q.push({i, j});
        
		while (!q.empty()) {
            auto nd = q.front();
            q.pop();
          
		    for (auto d : dir) {
                int ni = nd.first + d[0];
                int nj = nd.second + d[1];
                if (ni >= 0 and ni < n and nj >= 0 and nj < m and grid[ni][nj] == '1'){
                    grid[ni][nj] = '0';
                    q.push({ni, nj});
                }
            }
        }
    }

    int numIslands(vector<vector<char>> &grid) {
        if (grid.size() == 0) return 0;
        n = grid.size(), m = grid[0].size();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1') {
                    cnt++;
                    bfs(grid, i, j);
                }
            }
        }
        return cnt;
    }
};
