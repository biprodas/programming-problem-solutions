// 1295. Find Numbers with Even Number of Digits
class Solution {
  public:
    int findNumbers(vector<int>& nums) {
      int cnt = 0;
      for(auto a: nums){
        if(to_string(a).size() % 2 == 0)
          cnt++;
      }
      return cnt;
    }
};