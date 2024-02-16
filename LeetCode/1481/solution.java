// 1481. Least Number of Unique Integers after K Removals
class Solution {
    public int findLeastNumOfUniqueInts(int[] arr, int k) {
        Map<Integer, Integer> map = new HashMap<>();
        for(int a: arr) {
            map.put(a, map.getOrDefault(a, 0)+1);
        }
        
        List<Integer> v = new ArrayList<>();
        for(int a: map.values()) {
            v.add(a);
        }

        Collections.sort(v);

        int cnt = 0;
        for(int a: v){
            if(k < a) break;
            k -= a;
            cnt++;
        }

        return v.size()-cnt;
    }
}