// 907. Sum of Subarray Minimums
class Solution {
public:
    const int MOD = 1e9+7;

    int sumSubarrayMins(vector<int>& arr) {
        long ans = 0;
        stack<int> st; 

        for(int i=0; i<=arr.size(); i++){
            while(st.size() && (i==arr.size() || arr[st.top()]>arr[i])){
                int mid = st.top();
                st.pop();

                int pse = st.empty() ? -1 : st.top();
                int nse = i;
                long cnt = (mid - pse) * (nse - mid) % MOD;

                ans = (ans + cnt * arr[mid]) % MOD;
            }
            st.push(i);
        }

        return ans;
    }
};