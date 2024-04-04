// 1614. Maximum Nesting Depth of the Parentheses
// Time: O(n)
// Space: O(1)
class Solution {
public:
    int maxDepth(string s) {
        int mx = -1;
        int cnt = 0;

        for(auto ch: s){
            if(ch=='(') cnt++;
            if(ch==')') cnt--;
            mx = max(mx, cnt);
        }

        return mx;
    }
};