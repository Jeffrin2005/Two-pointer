
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        /*
    // Example dry run with nums = [-4, -1, 0, 3, 10]
        // Initial state: result = [0, 0, 0, 0, 0], left = 0, right = 4, pos = 4
        // First iteration: abs(-4) < abs(10), result = [0, 0, 0, 0, 100], pos = 3, right = 3
        // Second iteration: abs(-4) > abs(3), result = [0, 0, 0, 16, 100], pos = 2, left = 1
        // Third iteration: abs(-1) < abs(3), result = [0, 0, 9, 16, 100], pos = 1, right = 2
        // Fourth iteration: abs(-1) < abs(0), result = [0, 1, 9, 16, 100], pos = 0, right = 1
        // Fifth iteration: abs(0) = abs(0), result = [0, 1, 9, 16, 100], pos = -1, left = 2
        // Final result: [0, 1, 9, 16, 100]
        */
        vector<int> result(n);
        int left = 0;
        int right = n - 1;
        int pos = n - 1;
        while (left <= right){
            if(abs(nums[left]) >abs(nums[right])){
                result[pos] = nums[left] * nums[left];
                pos--;
                left++;
            }else{
                result[pos] = nums[right] * nums[right];
                pos--;
                right--;
            }
        }
        return result;
    }
};
