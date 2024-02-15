// 2971. Find Polygon With the Largest Perimeter
class Solution {
    public long largestPerimeter(int[] nums) {
        Arrays.sort(nums);
        long ans = -1;
        long sum = 0;
        for(int i=0; i<nums.length; i++){
            if(nums[i] < sum){
                ans = sum + nums[i];
            }
            sum += nums[i];
        }
        return ans;
    }
}