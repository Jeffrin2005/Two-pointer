
/*SIMPLE TWO-POINTER C++ SOLUTION
Time complexity:o(n)
Space complexity:o(1)
  */
class Solution {
public:
    int minPairSum(std::vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        int ans = 0;
        while (left < right){
            int pairSum = nums[left] + nums[right];
            ans = max(ans, pairSum);
            left++; 
            right--; 
        }
        return ans ;
    }
};