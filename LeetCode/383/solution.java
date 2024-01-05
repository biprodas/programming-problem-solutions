// 383. Ransom Note
class Solution {
  public boolean canConstruct(String ransomNote, String magazine) {
    if(ransomNote.length() > magazine.length()) 
      return false;

    int[] freq = new int[26];

    for(char ch: magazine.toCharArray()){
      freq[ch-'a']++;
    } 

    for(char ch: ransomNote.toCharArray()){
      if(freq[ch-'a']==0) return false;
      freq[ch-'a']--;
    } 

    return true;
  }
}