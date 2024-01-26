// 576. Out of Boundary Paths
class Solution {
    private int[][][] dp = new int[51][51][51];
    private int mod = 1_000_000_007;

    public int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        for (int[][] i : dp) {
            for (int[] j : i) {
                Arrays.fill(j, -1);
            }
        }
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

        return dp[i][j][move] = (int)ans;
    }
}