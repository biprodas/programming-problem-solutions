// 205. Isomorphic Strings
// Time: O(n)
// Space: O(n)
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapS;
        unordered_map<char, char> mapT;

        for(int i=0; i<s.length(); i++){
            if(mapS.count(s[i])){
                if(mapS[s[i]] != t[i]) {
                    return false;
                }
            } else {
                if(mapT.count(t[i])){
                    return false;
                }
            }

            mapS[s[i]] = t[i];
            mapT[t[i]] = s[i];
        }

        return true;
    }
};