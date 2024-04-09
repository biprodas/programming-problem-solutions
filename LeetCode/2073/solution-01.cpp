// 2073. Time Needed to Buy Tickets
// Time: (n*m)
// Space: O(1)
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int cnt = 0;

        while(tickets[k] > 0){
            for(int i=0; i<n; i++){
                if(tickets[i] != 0){
                    tickets[i]--;
                    cnt++;
                }
                if(tickets[k]==0){
                    return cnt;
                }
            }
        }

        return cnt;
    }
};