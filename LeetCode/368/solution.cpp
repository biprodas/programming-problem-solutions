// 368. Largest Divisible Subset
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int prev = -1;
        vector<vector<vector<int>>> dp(nums.size(), vector<vector<int>>(nums.size()+1, vector<int>()));
        sort(nums.begin(), nums.end());
        return solve(0, prev, nums, dp);
    }

    vector<int> solve(int idx, int prev, vector<int>& nums, vector<vector<vector<int>>> &dp){
        if(idx==nums.size()) return {};
        if(dp[idx][prev+1].size()!=0) return dp[idx][prev+1];
        
        vector<int> take = {};
        if(prev == -1 || nums[idx]%nums[prev] == 0){
            take = solve(idx+1, idx, nums, dp);
            take.insert(take.begin(), nums[idx]);
        }
        vector<int> notake = solve(idx+1, prev, nums, dp);

        return dp[idx][prev+1] = take.size() >= notake.size() ? take : notake;
    }
};
