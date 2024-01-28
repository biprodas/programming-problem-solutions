// 1074. Number of Submatrices That Sum to Target
class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int cnt=0;

        for(int i=0; i<matrix.size(); i++){
            vector<int> sum(matrix[0].size(), 0);
            for(int j=i; j<matrix.size(); j++){
               for(int k=0; k<matrix[0].size(); k++){
                  sum[k] += matrix[j][k];
               }
               cnt += subarraySum(sum, target);
            }
        }

        return cnt;
    }

    int subarraySum(vector<int>& nums, int k){
        unordered_map<int,int> mp;
        int cnt=0, sum=0;

        mp[sum]++;

        for(auto &val: nums){
            sum += val;
            if(mp.find(sum-k) != mp.end())
                cnt += mp[sum-k];
            mp[sum]++;
        }

        return cnt;
    }
};