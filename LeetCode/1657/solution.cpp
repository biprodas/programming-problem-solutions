// 1657. Determine if Two Strings Are Close
class Solution {
  public:
    bool closeStrings(string word1, string word2) {
      int freq1[26] = {0};
      int freq2[26] = {0};

      for(char ch: word1) freq1[ch-'a']++;
      for(char ch: word2) freq2[ch-'a']++;

      for (int i = 0; i < 26; i++) {
        if ((freq1[i] && !freq2[i]) || (!freq1[i] && freq2[i])) {
          return false;
        }
      }

      sort(freq1, freq1 + 26);
      sort(freq2, freq2 + 26);

      for(int i=0; i<26; i++){
        if(freq1[i] != freq2[i]) {
          return false;
        }
      }

      return true;
    }
};