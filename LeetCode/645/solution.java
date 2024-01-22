// 645. Set Mismatch
class Solution {
    public int[] findErrorNums(int[] nums) {
        int[] freq = new int[nums.length+1];

        for(int a: nums){
            freq[a]++;
        }

        int dup=0, missing=0;
        for(int i=1; i<freq.length; i++){
            if(freq[i]==2) dup = i;
            if(freq[i]==0) missing = i;
        }

        return new int[]{dup, missing};
    }
}