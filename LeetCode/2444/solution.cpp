// 2444. Count Subarrays With Fixed Bounds
// Time: O(n)
// Space: O(1)
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        long long cnt = 0;
        int minIdx=-1, maxIdx=-1;
        int left = 0;
        for(int right=0; right<n; right++){
            if(nums[right]<minK || nums[right]>maxK){
                left = right+1;
                continue;
            }
            if(nums[right]==minK) minIdx = right;
            if(nums[right]==maxK) maxIdx = right;

            cnt += max(0, min(minIdx, maxIdx) - left + 1);
        }
        return cnt;
    }
};