// 200. Number of Islands
// Time: O(n*m)
// Space: O(n*m)

class Solution {
public:
    int rows = 0;
    int cols = 0;

    int numIslands(vector<vector<char>>& grid) {
        rows = grid.size();
        cols = grid[0].size();

        int cnt = 0;

        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                if(grid[i][j] == '1') {
                    cnt++;
                    dfs(i, j, grid);
                }
            }
        }
        
        return cnt;
    }

    void dfs(int i, int j, vector<vector<char>>& grid) {
        if(i<0 || i>=rows || j<0 || j>=cols)
            return;
        if(grid[i][j]!='1')
            return;

        // mark as visited
        grid[i][j] = '2'; 
        
        dfs(i + 1, j, grid);
        dfs(i - 1, j, grid);
        dfs(i, j + 1, grid);
        dfs(i, j - 1, grid);
    }
};