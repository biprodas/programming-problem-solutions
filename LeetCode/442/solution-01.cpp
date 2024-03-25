// 442. Find All Duplicates in an Array
// Time: O(n)
// Space: O(n)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        
        for(auto a: nums) {
            mp[a]++;
            if(mp[a]==2) 
                ans.push_back(a);
        }

        return ans;
    }
};