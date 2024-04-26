// 1289. Minimum Falling Path Sum II
class Solution {
public:
    int n, m;
    int dp[202][202];

    int minFallingPathSum(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        // memset(dp, 1e9, sizeof(dp));
        for(int i=0; i<202; i++) {
            for(int j=0; j<202; j++) {
                dp[i][j] = 1e9;
            }
        }

        int ans = 1e9;
        for(int j=0; j < m; j++) {
            ans = min(ans, solve(0, j, grid));
        }

        return ans;
    }

    int solve(int r, int c, vector<vector<int>>& grid) {
        if(r == n) return 0;
        if(dp[r][c] != 1e9) return dp[r][c];

        int ans = 1e9;
        
        for(int j=0; j < m; j++) {
            if(j == c) continue;
            ans = min(ans, solve(r+1, j, grid));
        }

        if(ans == 1e9) ans = 0;

        return dp[r][c] = grid[r][c] + ans;
    }
};