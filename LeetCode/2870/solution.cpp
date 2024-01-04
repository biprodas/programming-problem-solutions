// 2870. Minimum Number of Operations to Make Array Empty
class Solution {
  public:
    int minOperations(vector<int>& nums) {
      unordered_map<int,int>mp;

      for(auto a: nums){
        mp[a]++;
      }

      int cnt = 0;
      for(auto& a: mp){
        int v = a.second;
        if (v==1) return -1;
        cnt += v/3;
        if(v%3) cnt++;
      }

      return cnt;
    }
};