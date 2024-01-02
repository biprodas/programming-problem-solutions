// 2610. Convert an Array Into a 2D Array With Conditions
class Solution {
  public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
      vector<int> freq(nums.size() + 1);
      vector<vector<int>> mat;

      for (int i; i < nums.size(); i++) {
        int v = nums[i];
        if (freq[v] >= mat.size()) {
          mat.push_back({});
        }
        mat[freq[v]].push_back(v);
        freq[v]++;
      }
      
      return mat;
    }
};