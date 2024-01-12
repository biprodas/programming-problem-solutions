// 1704. Determine if String Halves Are Alike
class Solution {
  public boolean halvesAreAlike(String s) {
    Set<Character> vowels = new HashSet<>();
    vowels.add('a'); vowels.add('e'); vowels.add('i'); vowels.add('o'); vowels.add('u');
    vowels.add('A'); vowels.add('E'); vowels.add('I'); vowels.add('O'); vowels.add('U');

    int cnt=0;
    for(int i=0, j=s.length()-1; i < j; i++, j--){
      if(vowels.contains(s.charAt(i))) cnt++;
      if(vowels.contains(s.charAt(j))) cnt--;
    }

    return cnt==0;
  }
}