// 3005. Count Elements With Maximum Frequency
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101, 0);

        for(auto a: nums) freq[a]++;
        sort(freq.rbegin(), freq.rend());

        int ans = freq[0];
        for(int i=1; i<freq.size(); i++){
            if(freq[i]!=freq[i-1]) 
                break;
            ans += freq[i];
        }

        return ans;
    }
};