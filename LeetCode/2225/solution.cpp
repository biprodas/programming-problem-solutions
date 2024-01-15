// 2225. Find Players With Zero or One Losses
class Solution {
  public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
      unordered_map<int,int> mp;

      for(auto match: matches){
        mp[match[0]] += 0;
        mp[match[1]] += 1;
      }

      vector<vector<int>>ans(2);
      for(auto a: mp){
        if(a.second==0) ans[0].push_back(a.first);
        if(a.second==1) ans[1].push_back(a.first);
      }

      sort(ans[0].begin(), ans[0].end());
      sort(ans[1].begin(), ans[1].end());

      return ans;
    }
};