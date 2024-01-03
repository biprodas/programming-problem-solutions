// 2125. Number of Laser Beams in a Bank
class Solution {
  public int numberOfBeams(String[] bank) {
    int ans = 0, pre = 0;

    for(String str : bank) {
      int cnt = calc(str);
      if(cnt==0) 
        continue;
      ans += cnt * pre;
      pre = cnt;
    }

    return ans;
  }

  private int calc(String s) {
    int count = 0;
    for(char ch : s.toCharArray()){
      count += ch - '0';
    }
    return count;
  }    
}