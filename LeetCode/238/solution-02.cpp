// 238. Product of Array Except Self
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> products(n);

        int curr = 1;
        for(int i=0; i<n; i++){
            products[i] = curr;
            curr *= nums[i];
        }

        curr = 1;
        for (int i=n-1; i>=0; i--){
            products[i] *= curr;
            curr *= nums[i];
        }

        return products;
    }
};