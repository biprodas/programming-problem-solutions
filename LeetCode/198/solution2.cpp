// 198. House Robber
// Approach: Using two variables rob and norob
class Solution {
public:
    int rob(vector<int>& nums) {
        int rob = 0;
        int norob = 0;
        for(int i=0; i<nums.size(); i++) {
            int curr_rob = norob + nums[i];
            int curr_norob = max(rob, norob);
            rob = curr_rob;
            norob = curr_norob;
        }
        return max(rob, norob);
    }
};