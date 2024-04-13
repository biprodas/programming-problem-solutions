// 85. Maximal Rectangle
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> heights(cols+1); 
        int mxArea = 0;

        for(const auto& row : matrix){
            for(int i=0; i<cols; i++){
                heights[i] = row[i]=='1' ? heights[i]+1 : 0;
            }

            stack<int> st;
            for(int i=0; i<heights.size(); i++) {
                while(!st.empty() && heights[i]<heights[st.top()]){
                    int top = st.top();
                    st.pop();
                    int h = heights[top];
                    int w = st.empty() ? i : i-st.top()-1;
                    mxArea = max(mxArea, h*w);
                }
                st.push(i);
            }
        }

        return mxArea;
    }
};