// 1239. Maximum Length of a Concatenated String with Unique Characters
class Solution {
public:
    int maxLength(vector<string>& arr) {
        return solve(0, "", arr);
    }

    int solve(int i, string str, vector<string>& arr){
        if(!hasUniqueChar(str)) return 0;

        int ans = str.length();
        for(int j=i; j<arr.size(); j++){
            ans = max(ans, solve(j+1, str+arr[j], arr));
        }

        return ans;
    }

    bool hasUniqueChar(string str){
        unordered_set<char>uset(str.begin(),str.end());
        return str.length() == uset.size();
    }
};