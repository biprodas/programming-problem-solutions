// 442. Find All Duplicates in an Array
// Time: O(n)
// Space: O(1)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        for(int i=0; i<nums.size(); i++) {
            int idx = abs(nums[i]) - 1;
            if(nums[idx] < 0){
                ans.push_back(idx+1);
            }
            nums[idx] *= -1;
        }

        return ans;
    }
};