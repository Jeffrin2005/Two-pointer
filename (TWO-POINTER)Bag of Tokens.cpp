
class Solution {
public:
/*
Time complexity:o(nlogn)
Space complexity:o(1)
*/
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int left = 0;
        int right = tokens.size() - 1;
        int score = 0;
        int maxScore = 0;
        // elements from the left  score will be less, from the back elements  score is high , we greedy selecting to get maximum score 
        while (left <= right) {
            if(power >= tokens[left]){
                // Play the token face-up
                power -= tokens[left];
                left++;
                score++;
                maxScore = max(maxScore, score);
            }else if(score > 0){
                // Play the token face-down
                power+=tokens[right];
                right--;
                score--;
            }else{
                // No possible moves left
                break;
            }
        }
        return maxScore;
    }
};
