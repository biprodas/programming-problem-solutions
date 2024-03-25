// 442. Find All Duplicates in an Array
// Time: O(n)
// Space: O(n)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto a: nums) mp[a]++;

        vector<int> ans;
        for(auto entry: mp) {
            if(entry.second==2){
                ans.push_back(entry.first);
            }
        }

        return ans;
    }
};