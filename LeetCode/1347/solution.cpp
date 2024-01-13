// 1347. Minimum Number of Steps to Make Two Strings Anagram
class Solution {
  public:
    int minSteps(string s, string t) {
      int freq[26] = {0};
      
      for(auto a: s) freq[a-'a']++;
      for(auto a: t) freq[a-'a']--;

      int steps=0;
      for(auto a: freq) {
        if(a>0) steps+=a;
      }

      return steps;
    }
};