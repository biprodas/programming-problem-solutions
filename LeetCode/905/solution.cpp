// 905. Sort Array By Parity
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0, j=nums.size()-1;
        while(i<j){
            while(i<j && !(nums[i]&1)) i++;
            while(i<j && (nums[j]&1)) j--;
            if(i<j) swap(nums[i], nums[j]);
        }
        return nums;
    }
};