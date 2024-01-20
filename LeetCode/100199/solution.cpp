// 100199. Find if Array Can Be Sorted
class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; ){
          int j=i+1;
          while(j<nums.size() && count(nums[j])==count(nums[j-1])){
            j++;
          }
          sort(nums.begin()+i, nums.begin()+j);
          i=j;
        }
      
        for(int i=1; i<nums.size(); i++){
          if(nums[i-1]>nums[i]) 
            return false;
        }
      
        return true;
    }
  
    int count(int n) {
        int cnt = 0;
        while (n) {
            n &= (n - 1);
            cnt++;
        }
        return cnt;
    }
};