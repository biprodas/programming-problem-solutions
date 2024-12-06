// 2554. Maximum Number of Integers to Choose From a Range I
class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int, bool> mp;
        for(auto a: banned) mp[a] = true;

        int sum = 0, cnt = 0;
        for(int i=1; i<=n; i++){
            if(mp[i]) continue;
            if(sum + i > maxSum) return cnt;
            sum += i;
            cnt++;
        }

        return cnt;
    }
};