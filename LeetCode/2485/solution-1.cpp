// 2485. Find the Pivot Integer
// Time: O(n)
// Space: O(1)
class Solution {
public:
    int pivotInteger(int n) {
        int sum = n*(n+1)/2;
        int prefixSum = 0;
        for(int i=1; i<=n; i++){
            if(prefixSum*2==sum-i){
                return i;
            }
            prefixSum += i;
        }
        return -1;
    }
};