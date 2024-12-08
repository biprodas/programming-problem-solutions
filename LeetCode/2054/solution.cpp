// 2054. Two Best Non-Overlapping Events
class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        int mx = 0, ans = 0;

        sort(events.begin(), events.end());

        for(const auto& event: events) {
            int startT = event[0], endT = event[1], value = event[2];

            while(!pq.empty() && pq.top().first < startT) {
                mx = max(mx, pq.top().second);
                pq.pop();
            }

            ans = max(ans, mx+value);
            pq.push({ endT, value });
        }

        return ans;
    }
};