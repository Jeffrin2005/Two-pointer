
class Solution {
public:
/*time comp = o(n) space comp = o(1)
      // Example dry run with nums = [5, 2, 4, 7]:
        // Initial state: nums = [5, 2, 4, 7], i = 0, j = 1
        // First iteration: i = 0 (5 is odd), j = 1 (2 is even), swap -> nums = [2, 5, 4, 7]
        // i moves to 2, j moves to 3
        // Second iteration: i = 2 (4 is even), j = 3 (7 is odd), no swap needed
        // i moves out of bounds, loop exits
        // Final state: nums = [2, 5, 4, 7]
*/
    std::vector<int> sortArrayByParityII(std::vector<int>& nums) {
        int n = nums.size();
        int i = 0; // even indices
        int j = 1; // odd indices
        while (i < n && j < n) {
            if (nums[i] % 2 == 0){
                i += 2;// Move to the next even index
            }else if (nums[j] % 2 == 1){
                j+=2; // Move to the next odd index
            }else{
                swap(nums[i], nums[j]); 
                i+=2;
                j+=2;
            }
        }
  

        return nums;
    }
};
