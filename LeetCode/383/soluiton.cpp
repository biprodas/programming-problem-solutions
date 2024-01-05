// 383. Ransom Note
class Solution {
  public:
    bool canConstruct(string ransomNote, string magazine) {
      if(ransomNote.length() > magazine.length()) 
        return false;

      int freq[26] = {0};

      for(char ch: magazine){
        freq[ch-'a']++;
      } 

      for(char ch: ransomNote){
        if(freq[ch-'a']==0) return false;
        freq[ch-'a']--;
      } 

      return true;
    }
};