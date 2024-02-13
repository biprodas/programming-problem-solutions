// 2108. Find First Palindromic String in the Array
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto word: words){
            if(isPalindrome(word)){
                return word;
            }
        }
        return "";
    }

    bool isPalindrome(const string& s){
        int i = 0, j = s.length()-1;
        while(i<j){
            if(s[i++] != s[j--]){
                return false;
            }
        }
        return true;
    }
};