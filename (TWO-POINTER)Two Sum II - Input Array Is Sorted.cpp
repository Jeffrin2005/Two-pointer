
class Solution {
public:
// SIMPLE TWO-POINTER C++ SOLUTION 
/*Time complexity:o(n)
Space complexity:o(1)

*/
 vector<int> twoSum(vector<int>& numbers, int target){
        int left = 0; 
        int right = numbers.size() - 1;
        while(left < right){
            int sum = numbers[left] + numbers[right];
            if(sum == target){
                // +1 because the problem expects 1-based indices
                return {left + 1, right + 1};
            }else if (sum < target){
                left++; // Move the left pointer to the right to increase the sum
            }else{
                right--; // Move the right pointer to the left to decrease the sum
            }
        }
        // Return an empty vector as a fallback, should never be reached if input is valid
        return {};
    }
};
