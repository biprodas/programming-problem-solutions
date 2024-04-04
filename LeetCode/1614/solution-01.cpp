// 1614. Maximum Nesting Depth of the Parentheses
// Time: O(n)
// Space: O(n)
class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int mx = -1;

        for(auto ch: s){
            if(ch=='(') st.push(ch);
            if(ch==')') st.pop();
            mx = max(mx, (int)st.size());
        }

        return mx;
    }
};