// 1235. Maximum Profit in Job Scheduling
class Solution {
  int n;
  vector<int> mem;

  public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
      n = startTime.size();
      vector<vector<int>> job;
      mem.resize(n,-1);
      
      for(int i=0;i<n;i++){
        job.push_back({startTime[i], endTime[i], profit[i]});
      }
      sort(job.begin(), job.end());
      sort(startTime.begin(), startTime.end());
      int ans = rec(0, job, startTime);
      return ans;
    }

    int rec(int i, vector<vector<int>>& job, vector<int>& startTime){
      if(i>=n) return 0;
      if(mem[i]!=-1) return mem[i];
      int index = lower_bound(startTime.begin(), startTime.end(), job[i][1]) - startTime.begin();
      int take = job[i][2] + rec(index, job, startTime);
      int notTake = rec(i+1, job, startTime);
      return mem[i] = max(take, notTake);
     }
};