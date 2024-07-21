
// time comp  = o(n) 
//FLOYDS TORTOISE C++ SOLUTION TWO-POINTERS 
// space comp = o(n)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        // First phase to find intersection point
        do {
            slow = nums[slow];      // Move slow by 1 step
            fast = nums[nums[fast]]; // Move fast by 2 steps
        } while(slow != fast);
        // Second phase to find the entry point of the cycle
        slow = nums[0]; // Reset slow to the start
        while (slow != fast) {
            slow = nums[slow]; // Move slow by 1 step
            fast = nums[fast]; // Move fast by 1 step
        }
        return fast; 
    }
};
