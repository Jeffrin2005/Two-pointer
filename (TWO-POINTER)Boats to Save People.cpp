class Solution {
public:
/*
Time complexity:o(n)
Space complexity:o(1)
*/
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i = 0, j = people.size()-1, count = 0;
        while(i<=j){
            if(people[i] + people[j] <= limit){
                i++;
            }
            count++;
            j--;
        }
        return count;
    }
};
