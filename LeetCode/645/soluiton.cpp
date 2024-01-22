// 645. Set Mismatch
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> freq(nums.size()+1, 0);

        for(auto a: nums){
            freq[a]++;
        }

        int dup, missing;
        for(int i=1; i<freq.size(); i++){
            if(freq[i]==2) dup = i;
            if(freq[i]==0) missing = i;
        }

        return {dup, missing};
    }
};