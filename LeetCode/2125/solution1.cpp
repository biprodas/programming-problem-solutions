// 2125. Number of Laser Beams in a Bank
class Solution {
  public:
    int numberOfBeams(vector<string>& bank) {
      int ans = 0, pre = 0;

      for (const string& str : bank) {
        int cnt = calc(str);
        if (cnt == 0) continue;
        ans += cnt * pre;
        pre = cnt;
      }

      return ans;
    }

  private:
    int calc(const string& s) {
      int count = 0;
      for (char c : s) {
        count += c - '0';
      }
      return count;
    }
};
