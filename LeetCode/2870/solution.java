// 2870. Minimum Number of Operations to Make Array Empty
import java.util.HashMap;
import java.util.Map;

class Solution {
  public int minOperations(int[] nums) {
    Map<Integer, Integer> mp = new HashMap<>();

    for(int n: nums){
      mp.put(n, mp.getOrDefault(n, 0) + 1);
    }

    int cnt = 0;
    for(Map.Entry<Integer, Integer> entry : mp.entrySet()){
      int v = entry.getValue();
      if (v==1) return -1;
      cnt += v/3;
      if(v%3 != 0) cnt++;
    }

    return cnt;
  }
}