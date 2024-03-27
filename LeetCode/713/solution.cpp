// 713. Subarray Product Less Than K
// Time: O(n)
// Space: O(1)
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;

        int n = nums.size();
        int product = 1, cnt = 0;
        int left = 0;

        for(int right=0; right < n; right++){
            product *= nums[right];
            while(product >= k){
                product /= nums[left++];
            }
            cnt += right - left + 1;
        }

        return cnt;
    }
};