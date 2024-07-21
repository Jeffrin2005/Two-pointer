
class Solution {
/*
SIMPLE TWO-POINTER COMMENTED  C++ SOLUTION 
time comp = o(nlogn + mlogm ) space comp = o(1)
*/
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers){
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int n1 = players.size();
        int n2 = trainers.size();
        int i = 0;
        int j = 0;
        int matches = 0;
        while (i < n1 && j < n2){
            if (players[i] <= trainers[j]){
                // If the current player can be trained by the current trainer 
                matches++; 
                i++; // Move to the next player
            }
            j++; // Move to the next trainer
        }
        return matches;
    }
};
