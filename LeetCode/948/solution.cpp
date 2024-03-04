// 948. Bag of Tokens
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int low = 0;
        int high = tokens.size() - 1;
        int score = 0;

        sort(tokens.begin(), tokens.end());

        while(low <= high){
            if(power >= tokens[low]){
                power -= tokens[low];
                score++;
                low++;
            } else if(low<high && score > 0) {
                power += tokens[high];
                score--;
                high--;
            }
            else {
                break;
            }
        }

        return score;
    }
};