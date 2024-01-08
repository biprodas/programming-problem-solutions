// 1295. Find Numbers with Even Number of Digits
class Solution {
  public int findNumbers(int[] nums) {
    int cnt = 0;
    for(int num: nums){
      if(String.valueOf(num).length() % 2 == 0)
        cnt++;
    }
    return cnt;
  }
}