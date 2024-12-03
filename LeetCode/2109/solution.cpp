// 2109. Adding Spaces to a String
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string str = "";
        int m=s.size(), n=spaces.size();
        for(int i=0, j=0; i<m; i++){
            if(j<n && i==spaces[j]){
                str += ' ';
                j++;
            }
            str += s[i];
        }
        return str;
    }
};