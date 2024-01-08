// 977. Squares of a Sorted Array
class Solution {
  public int[] sortedSquares(int[] nums) {
    for(int i=0; i<nums.length; i++){
      nums[i] *= nums[i];
    }
    Arrays.sort(nums);
    return nums;
  }
}