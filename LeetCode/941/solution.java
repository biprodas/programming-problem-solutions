// 941. Valid Mountain Array
class Solution {
  public boolean validMountainArray(int[] arr) {
    int sz = arr.length;
    
    int i=0;
    while(i<sz-1){
      if(arr[i+1] > arr[i]) i++;
      else break;
    }
    
    int j=sz-1;
    while(i<j){
      if(arr[j] < arr[j-1]) j--;
      else break;
    }

    return (i>0 && j<sz-1 && i==j);
  }
}