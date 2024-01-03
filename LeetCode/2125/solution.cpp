// 2125. Number of Laser Beams in a Bank
class Solution {
  public:
    int numberOfBeams(vector<string>& bank) {
      int ans = 0, pre = 0;
        
      for (string str : bank) {
        int cnt = 0;
        for (char ch : str) {
          if (ch == '1') cnt++;
        }
        if (cnt > 0) {
          ans += (cnt * pre);
          pre = cnt;
        }
      }
      
      return ans;
    }
};