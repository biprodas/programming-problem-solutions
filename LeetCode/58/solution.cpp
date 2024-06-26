// 58. Length of Last Word
// Time: O(n)
// Space: O(1)
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int cnt = 0;
        for(int i=n-1; i>=0; i--){
            if(s[i]==' ' && cnt) break;
            if(s[i]!=' ') cnt++;
        }
        return cnt;
    }
};