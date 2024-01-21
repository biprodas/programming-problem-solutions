// 198. House Robber
// Approach: Recursive DP
class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size() , -1);
        return solve(0, nums, dp);
    }

    int solve(int i, vector<int>& nums, vector<int>& dp){
        if(i>=nums.size()) return 0;

        if(dp[i]!=-1) return dp[i];
        
        int pick = nums[i] + solve(i+2, nums, dp);
        int no_pick = solve(i+1, nums, dp);

        return dp[i] = max(pick, no_pick);
    }
};