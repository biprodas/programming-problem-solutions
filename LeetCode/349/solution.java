// 349. Intersection of Two Arrays
class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Map<Integer, Integer> map = new HashMap<>();
        List<Integer> ans = new ArrayList<>();

        for(int a: nums1) map.put(a, 1);
        for(int a: nums2) {
            if(map.containsKey(a) && map.get(a)==1) {
                ans.add(a);
                map.put(a, 0);
            }
        }

        return ans.stream().mapToInt(i->i).toArray();
    }
}