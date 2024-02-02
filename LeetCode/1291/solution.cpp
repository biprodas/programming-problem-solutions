// 1291. Sequential Digits
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        
        for(int i=1; i <= 9; i++) {
            int k = i;
            int nextDigit = i+1;

            while(k <= high && nextDigit <= 9) {
                k = k*10 + nextDigit;
                if(low <= k && k <= high) 
                    ans.push_back(k);
                nextDigit++;
            }
        }
        
        sort(ans.begin(), ans.end());

        return ans;
    }
};