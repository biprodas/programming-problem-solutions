// 739. Daily Temperatures
// Monotonic Stack
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        int sz = temps.size();
        vector<int> answer(sz, 0);
        stack<int> stack;
        for(int i=0; i<sz; i++){
            // next greater (stackTop < current)
            while(!stack.empty() && temps[stack.top()] < temps[i]){
                answer[stack.top()] = i - stack.top();
                stack.pop();
            }
            stack.push(i);
        }
        return answer;
    }
};