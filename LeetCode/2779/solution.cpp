// 2779. Maximum Beauty of an Array After Applying Operation
class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;

        sort(nums.begin(), nums.end());

        for(int i=0, j=0; i<n; i++) {
            while(j<n && nums[j]-nums[i] <= 2*k) {
                j++;
            }
            ans = max(ans, j-i);
        }

        return ans;
    }
};