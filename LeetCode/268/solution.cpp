// 268. Missing Number
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        for(auto a: nums) sum -= a;
        return sum;
    }
};