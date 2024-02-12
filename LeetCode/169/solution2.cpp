// 169. Majority Element
// Using Boyer–Moore majority vote algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int candidate;
        for(int a: nums){
            if(cnt==0) candidate = a;
            a==candidate ? cnt++ : cnt--;
        }
        return candidate;
    }
};