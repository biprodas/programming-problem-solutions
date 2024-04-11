// 402. Remove K Digits
// Time: O(n)
// Space: O(n)
class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<char> st;
        string ans;

        for(char ch: num){
            while(k>0 && !st.empty() && st.back()>ch){
                st.pop_back();
                k--;
            }
            st.push_back(ch);
        }

        while(k>0 && !st.empty()){
            st.pop_back();
            k--;
        }

        for(char ch: st){
            if(ans.empty() && ch=='0') 
                continue;
            ans.push_back(ch);
        }
        
        return ans.empty() ? "0" : ans;
    }
};