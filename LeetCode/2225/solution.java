// 2225. Find Players With Zero or One Losses
class Solution {
  public List<List<Integer>> findWinners(int[][] matches) {
    Map<Integer, Integer> map= new HashMap<>();

    for(int[] match: matches){
      map.put(match[0], map.getOrDefault(match[0], 0) + 0);
      map.put(match[1], map.getOrDefault(match[1], 0) + 1);
    }

    List<List<Integer>> ans = new ArrayList<>();
    ans.add(new ArrayList<>());
    ans.add(new ArrayList<>());

    for(Map.Entry<Integer, Integer> entry : map.entrySet()){
      if(entry.getValue()==0) ans.get(0).add(entry.getKey());
      if(entry.getValue()==1) ans.get(1).add(entry.getKey());
    }
    
    Collections.sort(ans.get(0));
    Collections.sort(ans.get(1));

    return ans;
  }
}