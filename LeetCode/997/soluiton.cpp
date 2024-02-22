// 997. Find the Town Judge
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> freq(n + 1, 0); 
        for(const auto& a: trust){
            freq[a[0]] = -1;
            freq[a[1]]++;
        }
        for(int i=1; i<=n; i++){
            if(freq[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};