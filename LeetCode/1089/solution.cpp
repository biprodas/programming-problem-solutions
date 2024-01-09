// 1089. Duplicate Zeros
class Solution {
  public:
    void duplicateZeros(vector<int>& arr) {
      int sz = arr.size();
      for(int i=0; i<sz; i++){
        if(arr[i]==0){
          for(int j=sz-1; j>i; j--){
            arr[j] = arr[j-1];
          }
          i++;
        }
      }
    }
};