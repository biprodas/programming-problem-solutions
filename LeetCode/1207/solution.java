// 1207. Unique Number of Occurrences
class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        Map<Integer, Integer> mp = new HashMap<>();
        int[] freq = new int[1001];
        for(int a: arr){
            int val = mp.getOrDefault(a, 0);
            freq[val]--;
            mp.put(a, val+1);
            freq[val+1]++;
        }
        for(int a: freq){
            if(a>1) return false;
        }
        return true;
    }
}