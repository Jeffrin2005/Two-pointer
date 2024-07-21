class Solution {
public:
//SIMPLE TWO-POINTER COMMENTED C++ SOLUTION 
/*Time complexity:o(n)
Space complexity:o(n)

*/
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0; // Pointer for adding the elmenet into result 
        //temporary storage for pivot elements
        vector<int>pivots;
        vector<int>greater; // To store elements greater than pivot in correct order
        // distribute elements less than and collect others
        for(int i = 0; i < n; i++){
            if(nums[i] < pivot){
                result[left] = nums[i];
                left++;
            }else if(nums[i] > pivot){
                greater.push_back(nums[i]);
            }else{
                pivots.push_back(nums[i]);
            }
        }
        //fill  pivot elements in the middle
        for(auto&pivot_val : pivots){
            result[left] = pivot_val;
            left++;
        }
        // fill  greater elements at the end
        for(auto&greater_val : greater){
            result[left] = greater_val;
            left++;
        }
        return result;
    }
};
