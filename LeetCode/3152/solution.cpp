// 3152. Special Array II
class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> prefix(n, 0);

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1];
            if ((nums[i] + nums[i-1]) % 2 == 0) {
                prefix[i]++;
            }
        }

        vector<bool> ans;
        for (const auto& q : queries) {
            int left = q[0], right = q[1];
            ans.push_back(prefix[right] == prefix[left]);
        }

        return ans;
    }
};