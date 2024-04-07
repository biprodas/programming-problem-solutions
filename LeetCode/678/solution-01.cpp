// 678. Valid Parenthesis String
// Approach: Top-Down Dynamic Programming - Memoization
// Time: O(n*n)
// Space: O(n*n)
class Solution {
public:
    int dp[101][101];
    bool checkValidString(string s) {
        memset(dp, -1, sizeof(dp));
        return isValidString(0, 0, s);
    }

    bool isValidString(int idx, int openCount, const string & str) {
        if (idx == str.size())
            return (openCount == 0);

        if (dp[idx][openCount] != -1)
            return dp[idx][openCount];

        bool isValid = false;

        if(str[idx] == '(') {
            isValid = isValidString(idx + 1, openCount + 1, str);
        }
        if(str[idx] == ')' && openCount){
            isValid = isValidString(idx + 1, openCount - 1, str);
        }
        if(str[idx] == '*') {
            isValid |= isValidString(idx + 1, openCount + 1, str); // '*' as '('
            if (openCount) {
                isValid |= isValidString(idx + 1, openCount - 1, str); // '*' as ')'
            }
            isValid |= isValidString(idx + 1, openCount, str); // '*' as empty
        }

        return dp[idx][openCount] = isValid;
    }
};