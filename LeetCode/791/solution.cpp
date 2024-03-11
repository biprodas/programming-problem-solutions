// 791. Custom Sort String
class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> freq;
        for(auto& ch: s) {
            freq[ch]++;
        }

        string ans = "";
        for(auto& ch: order){
            if(freq.find(ch) != freq.end()) {
                ans.append(freq[ch], ch);
                freq.erase(ch);
            }
        }

        for(auto& it: freq){
            ans.append(it.second, it.first);
        }

        return ans;
    }
};