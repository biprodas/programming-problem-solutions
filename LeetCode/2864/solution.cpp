// 2864. Maximum Odd Binary Number
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt1 = 0, cnt0 = 0;
        for(char ch: s){
            if(ch=='1') cnt1++;
            else cnt0++;
        }
        string ans = string(cnt1-1, '1') + string(cnt0, '0') + '1';
        return ans;
    }
};