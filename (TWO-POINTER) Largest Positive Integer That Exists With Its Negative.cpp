
class Solution {
public:
/*
Time complexity:O(nlogn)
Space complexity:o(1)
*/
    int findMaxK(vector<int>& nums){
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        int maxK = -1;
        while (left < right) {
            if (nums[left] + nums[right] == 0) { // Check if the sum of the numbers at the pointers is zero
                maxK = max(maxK, abs(nums[right])); // Update maxK if a new pair is found
                left++; // Move left pointer to the right
                right--; // Move right pointer to the left
            }else if(nums[left] + nums[right] > 0){
                right--; // Move right pointer to the left if the sum is positive
            } else {
                left++; // Move left pointer to the right if the sum is negative
            }
        }
        return maxK;
    }
};
