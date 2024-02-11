// 1463. Cherry Pickup II
class Solution {
public:
    int dp[70][70][70];
    int dy[3] = {-1,0,1};

    int cherryPickup(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        memset(dp, -1, sizeof(dp));
        return dfs(0, 0, n-1, grid, m, n);
    }

    int dfs(int i, int c1, int c2, vector<vector<int>>& grid, int m, int n) {
        if(i >= m) return 0;
        if(c1<0 || c1>=n || c2<0 || c2>=n) return 0;

        if(dp[i][c1][c2] != -1)
            return dp[i][c1][c2];
        
        int ans = (c1==c2) ? grid[i][c1] : grid[i][c1] + grid[i][c2];

        int mx = 0;
        for(int k=0; k<3; k++) {
            for(int r=0; r<3; r++){
                mx = max(mx, dfs(i+1, c1+dy[k], c2+dy[r], grid, m, n));
            }
        }

        ans += mx;
        return dp[i][c1][c2] = ans;
    }
};