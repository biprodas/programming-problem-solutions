// 41. First Missing Positive
// Time: O(n)
// Space: O(n), Auxiliary space used is O(1)
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        bool contains1 = false;

        for(int i=0; i<n; i++){
            if(nums[i]==1){
                contains1 = true;
            }
            if(nums[i]<=0 || nums[i]>n){
                nums[i] = 1;
            }
        }

        if (!contains1) return 1;

        for(int i=0; i<n; i++) {
            int idx = abs(nums[i]);
            if(idx==n) idx = 0;
            nums[idx] = - abs(nums[idx]);     
        }
        
        for(int i=1; i<n; i++) {
            if(nums[i]>0) return i;
        }

        if(nums[0]>0) return n;

        return n+1;
    }
};