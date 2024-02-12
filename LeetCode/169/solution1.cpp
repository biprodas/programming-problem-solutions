// 169. Majority Element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;

        int n = nums.size()/2;
        for(auto a: nums) {
            freq[a]++;
            if(freq[a] > n) return a;
        }

        return 0;
    }
};