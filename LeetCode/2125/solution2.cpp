// 2125. Number of Laser Beams in a Bank
class Solution {
  public:
    int numberOfBeams(vector<string>& bank) {
      vector<int> freq(bank.size()+1);

      for (int i=0; i <bank.size(); i++){
        int sum = 0;
        for (char ch: bank[i])
          if (ch=='1') sum++;
        freq[i] = sum;
      }

      int ans = 0, pre=0;
      for (int i=0; i < freq.size(); i++){
        ans += freq[i] * pre;
        if (freq[i]) pre = freq[i];
      }

      return ans;
    }
};