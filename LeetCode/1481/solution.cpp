// 1481. Least Number of Unique Integers after K Removals
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> freq;
        for(auto a: arr) freq[a]++;
        
        vector<int> v;
        for(auto a: freq) {
            v.push_back(a.second);
        }

        sort(v.begin(), v.end());

        int cnt = 0;
        for(auto a: v){
            if(k < a) break;
            k -= a;
            cnt++;
        }

        return v.size()-cnt;
    }
};