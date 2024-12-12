// 2558. Take Gifts From the Richest Pile
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq(gifts.begin(), gifts.end());

        while(k--){
            int mx = pq.top();
            pq.pop();
            pq.push(sqrt(mx));
        }
        
        long long ans = 0;
        while(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }

        return ans;
    }
};