// 930. Binary Subarrays With Sum
// Sliding Window
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int start = 0;
        int currSum = 0;
        int totalCnt = 0;

        for(int end=0, cnt=0; end < nums.size(); end++) {
            if(nums[end] == 1) cnt = 0;

            currSum += nums[end];

            while(start <= end && currSum >= goal) {
                if(currSum == goal) cnt++;
                currSum -= nums[start++];
            }

            totalCnt += cnt;
        }
        
        return totalCnt;
    }
};