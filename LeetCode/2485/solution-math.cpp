// 2485. Find the Pivot Integer
// Time: O(1)
// Space: O(1)
class Solution {
public:
    int pivotInteger(int n) {
        int sum = n*(n+1)/2;
        int root = sqrt(sum);
        return root*root == sum ? root : -1;
    }
};