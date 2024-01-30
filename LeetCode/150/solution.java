// 150. Evaluate Reverse Polish Notation
class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer> st = new Stack<>();
        for(String token: tokens){
            if(token.length() == 1 && token.charAt(0) < 48){
                int top1 = st.pop();
                int top2 = st.pop();
                int val = resolve(top2, top1, token.charAt(0));
                st.push(val);
            }
            else st.push(Integer.parseInt(token));
        }
        return st.pop();
    }

    private int resolve(int x, int y, char op){
        if(op=='+') return x + y;
        else if(op=='-') return x - y;
        else if(op=='*') return x * y;
        else return x / y;
    }
}