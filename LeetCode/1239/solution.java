// 1239. Maximum Length of a Concatenated String with Unique Characters
class Solution {
    public int maxLength(List<String> arr) {
        return solve(0, "", arr);
    }

    int solve(int i, String str, List<String> arr){
        if(!hasUniqueChar(str)) return 0;

        int ans = str.length();
        for(int j=i; j<arr.size(); j++){
            ans = Math.max(ans, solve(j+1, str+arr.get(j), arr));
        }

        return ans;
    }

    boolean hasUniqueChar(String str){
        Set<Character> set = new HashSet<>();
        for (char ch : str.toCharArray()) {
            if (!set.add(ch)) return false;
        }
        return true;
    }
}