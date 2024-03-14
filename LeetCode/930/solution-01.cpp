// 930. Binary Subarrays With Sum
// Sliding Window
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return slidingWindow(nums, goal) - slidingWindow(nums, goal-1);
    }

    int slidingWindow(vector<int>& nums, int goal) {
        int start=0;
        int currSum = 0;
        int totalCnt = 0;

        for(int end=0; end < nums.size(); end++) {
            currSum += nums[end];
            while(start <= end && currSum > goal) {
                currSum -= nums[start++];
            }
            totalCnt += end - start + 1;
        }

        return totalCnt;
    }
};