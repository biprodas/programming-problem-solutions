// 1700. Number of Students Unable to Eat Lunch
// Time: O(n*m)
// Space: O(n+m)
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        queue<int> q;
        stack<int> st;
        int cnt = 0;

        for(int i=0; i<n; i++){
            q.push(students[i]);
            st.push(sandwiches[n-i-1]);
        }

        while(!q.empty() && cnt<q.size()){
            if(q.front() == st.top()){
                st.pop();
                q.pop();
                cnt = 0;
            } else {
                q.push(q.front());
                q.pop();
                cnt++;
            }
        }

        return q.size();
    }
};