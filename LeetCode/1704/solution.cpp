// 1704. Determine if String Halves Are Alike
class Solution {
  public:
    bool halvesAreAlike(string s) {
      unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
      
      int cnt=0;
      for(int i=0, j=s.length()-1; i < j; i++, j--){
        if(vowels.count(s[i])) cnt++;
        if(vowels.count(s[j])) cnt--;
      }

      return cnt==0;
    }
};