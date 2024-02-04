// 76. Minimum Window Substring
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> required, seen;
        int missing = 0;

        for(char ch: t) {
            if(!required[ch]) 
                missing++;
            required[ch]++;
        }

        int fast=0, slow = 0;
        int startIndex = 0;
        int minLen = INT_MAX;
        
        for(fast=0; fast < s.size(); fast++){
            if(required[s[fast]]>0){
                seen[s[fast]]++;
                if(seen[s[fast]] == required[s[fast]]) {
                    missing--;
                }
            }
            while(missing == 0) {
                if(fast - slow < minLen) {
                    minLen = fast - slow;
                    startIndex = slow;
                }
                if(required[s[slow]]) {
                    seen[s[slow]]--;
                    if(seen[s[slow]] < required[s[slow]]) {
                        missing++;
                    }
                }
                slow++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(startIndex, minLen+1);
    }
};
