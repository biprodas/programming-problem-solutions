// 2149. Rearrange Array Elements by Sign
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());

        int pos=0, neg=1;
        for(int& a: nums){
            if(a > 0){
                ans[pos] = a;
                pos += 2;
            }
            if(a < 0){
                ans[neg] = a;
                neg += 2;
            }
        }

        return ans;
    }
};