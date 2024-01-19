// 931. Minimum Falling Path Sum
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> dp(row, vector<int>(col, INT_MAX));

        int ans = INT_MAX;
        for (int i=0; i<col; i++){
            ans = min(ans, solve(0, i, matrix, dp));
        }

        return ans;
    }

    int solve(int row, int col, vector<vector<int>>& mat, vector<vector<int>>& dp){
        int ROW = mat.size();
        int COL = mat[0].size();

        if(row==ROW) return 0;
        if(col < 0 || col > COL-1) return INT_MAX;

        if(dp[row][col] != INT_MAX) return dp[row][col];

        int left = solve(row+1, col-1, mat, dp);
        int down =  solve(row+1, col, mat, dp);
        int right = solve(row+1, col+1, mat, dp);

        int ret = mat[row][col] + min({ left, down, right});

        return dp[row][col] = ret;
    }
};