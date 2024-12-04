// 2825. Make String a Subsequence Using Cyclic Increments
class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int j=0;
        for(auto ch: str1){
            if(ch==str2[j] || ch+1==str2[j] || (ch=='z' && 'a'==str2[j])){
                j++;
            }
        }
        return j==str2.length();
    }
};