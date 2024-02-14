// 2149. Rearrange Array Elements by Sign
class Solution {
    public int[] rearrangeArray(int[] nums) {
        int[] ans = new int[nums.length];

        int pos=0, neg=1;
        for (int num: nums) {
            if (num > 0) {
                ans[pos] = num;
                pos += 2;
            }
            if(num < 0) {
                ans[neg] = num;
                neg += 2;
            }
        }
        
        return ans;
    }
}