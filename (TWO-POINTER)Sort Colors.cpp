/*
SIMPLE TWO-POINTER COMMENTED C++ SOLUTION (IN-PLACE)
Time complexity:o(n)
Space complexity:o(1)

*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0,  current = 0;
        int high = nums.size() - 1;
        // high is for placing 2s and low is for 1s 
        while (current <= high) {
            if (nums[current] == 0) {// bcoz we alwasy want the 0 in the first positions ,
            //so after swapping continuously 0 will be in the first 
                swap(nums[low], nums[current]);
                low++;
                 current++;
            }else if(nums[current] == 1){
    // y. Since 1s are supposed to be between 0s and 2s, there's no need to swap or move them around. 
    //The algorithm ensures that 1s will naturally end up in the correct position as 0s are moved to the front and 2s to the back.
                 current++;
            }else if(nums[current] == 2){
                // case  = [2, 0, 2, 1, 1, 0] in the first element is 2 which is nums[current] so swap with high
                // swap with high (high is used to place 2s ) so which turn out to be  [0, 0, 2, 1, 1, 2]  (0th index and last index)
                swap(nums[current], nums[high]);
                high--;
            }
        }
    }
};
