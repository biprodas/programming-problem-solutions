// 1544. Make The String Great
// Time: O(n)
// Space: O(n)
class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string ans = "";

        for(char ch: s){
            if(st.empty()) st.push(ch);
            else if(abs(st.top()-ch)==32) st.pop();
            else st.push(ch);
        }
        
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};