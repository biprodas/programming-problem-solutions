// 1043. Partition Array for Maximum Sum
class Solution {
public:
    vector<int> dp;

    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        dp.resize(arr.size(), -1);
        return solve(0, k, arr);
    }

    int solve(int i, int k, vector<int>& arr){
        int n = arr.size();
        if(i==n) return 0;
        if(dp[i]!=-1) return dp[i];

        int ans = 0, mx=0;
        for(int j=i; j<min(i+k, n); j++){
            mx = max(mx, arr[j]);
            ans = max(ans, (j-i+1)*mx + solve(j+1, k, arr));
        }

        return dp[i] = ans;
    }
};