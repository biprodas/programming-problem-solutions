// 992. Subarrays with K Different Integers
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return slidingWindowAtMost(nums, k) - slidingWindowAtMost(nums, k - 1);
    }

    int slidingWindowAtMost(vector<int>& nums, int distinctK){
        int n = nums.size();
        unordered_map<int, int> mp;
        int left = 0, cnt = 0;

        for(int right=0; right < n; right++){
            mp[nums[right]]++;
            while(mp.size() > distinctK){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            cnt += right - left + 1;
        }

        return cnt;
    }
};