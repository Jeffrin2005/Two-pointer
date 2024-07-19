
class Solution {
public:
/*
Time complexity:o(n)
Space complexity:o(1)
*/
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j = 0; // Pointer for placing odd elements
        int n= nums.size();
        for (int i = 0; i <n; i++){
            if(nums[i] % 2 == 0) {
                swap(nums[i], nums[j]);
                j++; // Increment the position for the next even element
            }
        }
        return nums;
    }
};
