// 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz = nums.size();
        for(int i=0, j=0; i<sz; i++){
            if(nums[i]==0){
                if(j<i) j=i;
                while(nums[j]==0){
                    j++;
                    if(j==sz) return;
                }
                swap(nums[i], nums[j]);
            }
        }
    }
};