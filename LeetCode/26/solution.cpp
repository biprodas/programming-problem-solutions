// 26. Remove Duplicates from Sorted Array
class Solution {
  public:
    int removeDuplicates(vector<int>& nums) {
      int idx = 1, sz = nums.size();
      for(int i = 1; i < sz; i++){
        if(nums[i] != nums[i-1]){
          nums[idx++] = nums[i];
        }
      }
      return idx;
    }
};