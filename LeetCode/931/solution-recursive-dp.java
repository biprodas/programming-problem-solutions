// 931. Minimum Falling Path Sum
class Solution {
    private int m, n;
    private int[][] dp = new int[101][101];

    public int minFallingPathSum(int[][] matrix) {
        m = matrix.length;
        n = matrix[0].length;

        for (int[] row : dp) {
            Arrays.fill(row, -10000);
        }

        int ans = Integer.MAX_VALUE;
        for (int i=0; i<n; i++){
            ans = Math.min(ans, solve(0, i, matrix));
        }

        return ans;
    }

    int solve(int row, int col, int[][] mat){

        if(row==m) return 0;
        if(col < 0 || col > n-1) return Integer.MAX_VALUE;

        if(dp[row][col] != -10000) return dp[row][col];

        int left = solve(row+1, col-1, mat);
        int down =  solve(row+1, col, mat);
        int right = solve(row+1, col+1, mat);

        int ret = mat[row][col] + Math.min(left, Math.min(down, right));

        return dp[row][col] = ret;
    }
}