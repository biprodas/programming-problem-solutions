// 268. Missing Number
class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int sum = n*(n+1)/2;
        for(int a: nums) sum -= a;
        return sum;
    }
}