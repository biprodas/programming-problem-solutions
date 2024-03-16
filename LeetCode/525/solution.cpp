// 525. Contiguous Array
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp[0] = -1;
        int mx = 0, cnt = 0;
        for(int i=0; i<nums.size(); i++){
            cnt += nums[i]==1 ? 1 : -1;
            if(mp.count(cnt)) 
                mx = max(mx, i-mp[cnt]);
            else 
                mp[cnt] = i;
        }
        return mx;
    }
};