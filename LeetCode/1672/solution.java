// 1672. Richest Customer Wealth
class Solution {
  public int maximumWealth(int[][] accounts) {
    int mx = 0;
    for(int i=0; i<accounts.length; i++){
      int sum = 0;
      for(int j=0; j < accounts[i].length; j++){
        sum += accounts[i][j];
      }
      mx = Math.max(mx, sum);
    }
    return mx;
  }
}