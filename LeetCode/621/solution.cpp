// 621. Task Scheduler
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int freq[26] = {0};
        int mxFreq = 0, mxCnt = 0;
        int sz = tasks.size();

        for(const auto& ch: tasks) {
            freq[ch-'A']++;
            if(freq[ch-'A'] >= mxFreq) {
                if(freq[ch-'A'] == mxFreq) mxCnt++;
                else mxCnt = 1;
                mxFreq = freq[ch-'A'];
            }
        }

        int time = (mxFreq-1) * (n+1) + mxCnt;

        return max(sz, time);
    }
}