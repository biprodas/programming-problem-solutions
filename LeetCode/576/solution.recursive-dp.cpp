// 576. Out of Boundary Paths
class Solution {
public:
    int dp[51][51][51];
    const int mod=1e9+7;

    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp, -1, sizeof(dp));
        return solve(m, n, maxMove, startRow, startColumn);
    }

    int solve(int m, int n, int move, int i, int j){
        if(i<0 || i==m || j<0 || j==n) return 1;
        if(move==0) return 0;
        
        if(dp[i][j][move]!=-1) return dp[i][j][move];

        long ans = 0;
        long up = solve(m, n, move-1, i+1, j);
        long down = solve(m, n, move-1, i-1, j);
        long left = solve(m, n, move-1, i, j-1);
        long right = solve(m, n, move-1, i, j+1);

        ans = (up + down + left + right) % mod;

        return dp[i][j][move] = ans;
    }
};