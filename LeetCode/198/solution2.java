// 198. House Robber
// Approach: Using two variables rob and norob
class Solution {
    public int rob(int[] nums) {
        int rob = 0;
        int norob = 0;
        for(int i=0; i<nums.length; i++) {
            int curr_rob = norob + nums[i];
            int curr_norob = Math.max(rob, norob);
            rob = curr_rob;
            norob = curr_norob;
        }
        return Math.max(rob, norob);
    }
}