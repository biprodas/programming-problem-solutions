// 485. Max Consecutive Ones
class Solution {
  public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int mx = 0, sum=0;
      for(int num: nums){
        if(num==1) sum++;
        else {
          mx = max(mx, sum);
          sum=0;
        }
      }
      return max(mx, sum);
    }
};