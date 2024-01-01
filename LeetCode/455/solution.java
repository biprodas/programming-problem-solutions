class Solution {
  public int findContentChildren(int[] g, int[] s) {
    Arrays.sort(g);
    Arrays.sort(s);

    int chContent = 0, ckIdx = 0;
    int gLength = g.length, sLength = s.length;

    while(chContent < gLength &&  ckIdx < sLength) {
      if (s[ckIdx] >= g[chContent]) {
        chContent++;
      }
      ckIdx++;
    }

    return chContent;
  }
}