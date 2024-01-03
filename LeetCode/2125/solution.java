// 2125. Number of Laser Beams in a Bank
class Solution {
  public int numberOfBeams(String[] bank) {
    int ans = 0, pre = 0;
        
    for (String str : bank) {
      int cnt = 0;
      for (int i = 0; i < str.length(); i++){
        if (str.charAt(i) == '1') cnt++;
      }
      if (cnt > 0) {
        ans += (cnt * pre);
        pre = cnt;
      }
    }
    
    return ans;
  }
}