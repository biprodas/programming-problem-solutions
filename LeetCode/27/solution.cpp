// 27. Remove Element
class Solution {
  public:
    int removeElement(vector<int>& nums, int val) {
      int idx = 0, sz = nums.size();
      for(int i = 0; i < sz; i++){
        if(nums[i] != val){
          nums[idx++] = nums[i];
        }
      }
      return idx;
    }
};