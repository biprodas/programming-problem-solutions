// 1249. Minimum Remove to Make Valid Parentheses
// Time: O(n)
// Space: O(n)  
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans = "";
        int open = 0, close = 0, cnt = 0;

        for(char ch: s){
            if(ch=='('){
                open++;
                cnt++;
            }
            if(ch==')' && cnt>0){
                close++;
                cnt--;
            }
        }

        int k = min(open, close);
        open = k;
        close = k;

        for(char ch: s){
            if(ch=='('){
                if(open > 0){
                    ans += '(';
                    open--;
                }
            }
            else if(ch==')'){
                if(close>0 && close>open){
                    ans += ')';
                    close--;
                }
            }
            else ans += ch;
        }

        return ans;
    }
};