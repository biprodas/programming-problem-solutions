// 41. First Missing Positive
// Time: O(n)
// Space: O(n), Auxiliary space used is O(1)
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        bool hasOne = false;

        for(int i=0; i<n; i++){
            if(nums[i]==1) hasOne = true;
            if(nums[i]<=0 || nums[i]>n) nums[i] = 1;
        }

        if (!hasOne) return 1;

        for(int i=0; i<n; i++) {
            int idx = abs(nums[i]);
            if(idx==n) idx = 0;
            if(nums[idx]>0){
                nums[idx] = nums[idx] * -1;
            }     
        }
        
        for(int i=0; i<n; i++) {
            if(nums[i]>0) return i ? i : n;
        }

        return n+1;
    }
};