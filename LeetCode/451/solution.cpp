// 451. Sort Characters By Frequency
class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for(char ch: s) mp[ch]++;

        vector<pair<int,char>> v;
        for(auto a: mp){
            v.push_back({a.second,a.first});
        }
        sort(v.rbegin(),v.rend());

        string ans = "";
        for(auto a: v) {
            int cnt = a.first;
            char ch = a.second;
            while(cnt--) ans += ch;
        }

        return ans;
    }
};