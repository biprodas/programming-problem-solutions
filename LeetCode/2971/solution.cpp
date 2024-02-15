// 2971. Find Polygon With the Largest Perimeter
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long ans = -1;
        long long sum = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < sum){
                ans = sum + nums[i];
            }
            sum += nums[i];
        }
        return ans;
    }
};