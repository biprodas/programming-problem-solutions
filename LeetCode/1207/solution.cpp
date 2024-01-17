// 1207. Unique Number of Occurrences
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        int freq[1001] = {0};
        for(auto a: arr){
            freq[mp[a]]--;
            mp[a]++;
            freq[mp[a]]++;
        }
        for(auto a: freq){
            if(a>1) return false;
        }
        return true;
    }
};