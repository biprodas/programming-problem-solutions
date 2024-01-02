// 455. Assign Cookies
class Solution {
  public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      std::sort(g.begin(), g.end());
      std::sort(s.begin(), s.end());

      int gSize = g.size(), sSize = s.size();
      int chContent = 0, ckIdx = 0;

      while (chContent < gSize && ckIdx < sSize) {
        if(s[ckIdx] >= g[chContent]) {
          chContent++;
        }
        ckIdx++;
      }

      return chContent;
    }
};