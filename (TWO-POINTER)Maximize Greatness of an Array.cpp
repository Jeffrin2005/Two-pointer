class Solution {
public:
/*
time comp = O(n) space comp - O(1)
*/
    int maximizeGreatness(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); 
        int count = 0;
        int i = 0;
        int  j = 1; // for finding greater element
        while(j < n){
            if(nums[i] < nums[j]){
                count++;// satisifes the condtion 
                i++;
                j++; 
            } else {
                j++; // Only move the second pointer if no condition is met
            }
        }
        return count;
    }
};
