// 1291. Sequential Digits
class Solution {
    public List<Integer> sequentialDigits(int low, int high) {
        List<Integer> ans = new ArrayList<>();

        for (int i=1; i<=9; i++) {
            int k = i;
            int nextDigit = i+1;

            while (k <= high && nextDigit <= 9) {
                k = k * 10 + nextDigit;
                if (low <= k && k <= high) {
                    ans.add(k);
                }
                nextDigit++;
            }
        }

        ans.sort(null);
        return ans;
    }
}