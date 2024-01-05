// 300. Longest Increasing Subsequence
#define MAX_N 2501
#define EMPTY_VALUE -1

class Solution {
  public:
    int mem[MAX_N];

    int lengthOfLIS(vector<int>& nums) {
      int ans=0;
      
      for(int i=0; i<nums.size(); i++) {
        mem[i] = EMPTY_VALUE;
      }
      
      for(int i=0; i<nums.size(); i++) {
        ans = max(ans, fn(i, nums));
      }

      return ans;
    }

    int fn(int i, vector<int> &A) {
      if(mem[i] != EMPTY_VALUE) {
        return mem[i];
      }
      
      int ans = 0;
      for(int j=i+1; j<A.size(); j++) {
        if(A[j] > A[i]) {
          ans = max(ans, fn(j, A));
        }
      }
      
      mem[i] = ans + 1;
      return mem[i];
    }
};