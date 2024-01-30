// 150. Evaluate Reverse Polish Notation
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int sz = tokens.size();
        for(int i=0; i<sz; i++){
            if(isOperator(tokens[i])){
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                st.pop();
                int val = operation(top2, top1, tokens[i]);
                st.push(val);
            }
            else st.push(stoi(tokens[i]));
        }
        return st.top();
    }

    bool isOperator(string s){
        return (s=="+" || s=="-" || s=="*" || s=="/");
    }

    int operation(int x, int y, string op){
        if(op=="+") return x + y;
        if(op=="-") return x - y;
        if(op=="*") return x * y;
        if(op=="/") return (int)floor(x / y);
        return 0;
    }
};