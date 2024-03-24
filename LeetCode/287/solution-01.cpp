// 287. Find the Duplicate Number
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto a: nums){
            if(mp[a]) return a;
            mp[a]++;
        }
        return -1;
    }
};