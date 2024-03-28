// 2958. Length of Longest Subarray With at Most K Frequency
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int n = nums.size();
        int left = 0, mx = 0;

        for(int right=0; right < n; right++){
            freq[nums[right]]++;
            while(freq[nums[right]] > k){
                freq[nums[left++]]--;
            }
            mx = max(mx, right-left+1);
        }

        return mx;
    }
};