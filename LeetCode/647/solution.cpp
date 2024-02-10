// 647. Palindromic Substrings
class Solution {
public:
    int countSubstrings(string s) {
        int ans = 0;
        for(int i=0; i<s.length(); i++) {
            for(int j=i; j<s.length(); j++) {
                if(isPalindrome(s, i, j)) ans++;
            }
        }
        return ans;
    }

    bool isPalindrome(string str, int left, int right) {
        while(left < right) {
            if(str[left++] != str[right--]) return false;
        }
        return true;
    }
};