// 2593. Find Score of an Array After Marking All Elements
class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for(int i=0; i<n; i++) {
            pq.push({nums[i], i});
        }

        long long score = 0;

        while (!pq.empty()) {
            auto [val, i] = pq.top();
            pq.pop();
            if(nums[i]==-1) continue;
            score += val;
            nums[i] = -1;
            if(i>0) nums[i-1] = -1;
            if(i<n-1) nums[i+1] = -1;
        }

        return score;
    }
};