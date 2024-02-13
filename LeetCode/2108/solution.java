// 2108. Find First Palindromic String in the Array
class Solution {
    public String firstPalindrome(String[] words) {
        for(String word: words) {
            if(isPalindrome(word)){
                return word;
            }
        }
        return "";
    }

    Boolean isPalindrome(String s){
        int i = 0, j = s.length()-1;
        while(i<j){
            if(s.charAt(i++) != s.charAt(j--)){
                return false;
            }
        }
        return true;
    }
}