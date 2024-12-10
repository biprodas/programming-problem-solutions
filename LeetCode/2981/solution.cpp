// 2981. Find Longest Special Substring That Occurs Thrice I
class Solution {
public:
    int maximumLength(string s) {
        map<pair<char, int>, int> mp;
        int len = s.length();

        for(int i=0; i<len; i++) {
            int j = i, cnt = 0;
            while(j<len && s[i]==s[j]) {
                cnt++;
                mp[{s[i], cnt}]++;
                j++;
            }
        }

        int ans = -1;
        for (auto entry: mp) {
            if (entry.second >= 3){
                ans = max(ans, entry.first.second);
            }
        }

        return ans;
    }
};