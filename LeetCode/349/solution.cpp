// 349. Intersection of Two Arrays
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<int> ans;

        for(auto a: nums1) mp[a]++;
        for(auto a: nums2) {
            if(mp[a]) {
                ans.push_back(a);
                mp[a] = 0;
            }
        }

        return ans;
    }
};