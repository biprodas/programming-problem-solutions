// 100181. Divide an Array Into Subarrays With Minimum Cost I
class Solution {
public:
    int minimumCost(vector<int>& nums) {
        sort(nums.begin()+1, nums.end());
        return nums[0] + nums[1] + nums[2]; 
    }
};