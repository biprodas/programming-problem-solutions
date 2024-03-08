// 3005. Count Elements With Maximum Frequency
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101, 0);
        int mx = 0;

        for(auto a: nums) {
            freq[a]++;
            mx = max(mx, freq[a]);
        }
        
        int ans = 0;
        for(int a: freq){
            if(a==mx) 
                ans += a;
        }

        return ans;
    }
};