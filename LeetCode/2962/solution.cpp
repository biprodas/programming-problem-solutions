// 2962. Count Subarrays Where Max Element Appears at Least K Times
// Time: O(n)
// Space: O(1)
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int mx = *max_element(nums.begin(), nums.end());
        long long ans = 0;
        int left = 0, cnt = 0; 

        for(int right=0; right<n; right++){
            if(nums[right]==mx) cnt++;
            while(cnt >= k){
                if(nums[left++]==mx) cnt--;
                ans += n - right;
            }
        }

        return ans;
    }
};