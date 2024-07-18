
/*
nums = [0, 1, 4, 6, 7, 10] and diff = 3.
set = {0, 1, 4, 6, 7, 10}
When i = 1 (nums[i] = 1):
nums[i] + diff = 1 + 3 = 4 (exists in the set)
nums[i] + 2 * diff = 1 + 6 = 7 (exists in the set)
Both conditions are true, so this is a valid arithmetic triplet: (1, 4, 7) corresponding to indices (1, 2, 4).


The condition numSet.count(nums[i] + diff) checks if the number nums[i] + diff exists in the set.
Similarly, numSet.count(nums[i] + 2 * diff) checks for the existence of the number nums[i] + 2 * diff.
The && operator ensures that both conditions must be true for the if statement to execute its body. 
This means both nums[i] + diff and nums[i] + 2 * diff must be present in the set for the triplet to be considered valid.


*/
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        set<int>numSet(nums.begin(), nums.end());
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(numSet.count(nums[i] + diff) and numSet.count(nums[i] + 2 * diff)){
                count++;
            }
        }
        
        return count;
    }
};
