// 1347. Minimum Number of Steps to Make Two Strings Anagram
class Solution {
  public int minSteps(String s, String t) {
    int[] freq = new int[26];
      
    for(char a: s.toCharArray()) freq[a-'a']++;
    for(char a: t.toCharArray()) freq[a-'a']--;

    int steps=0;
    for(int a: freq) {
      if(a>0) steps+=a;
    }

    return steps;
  }
}