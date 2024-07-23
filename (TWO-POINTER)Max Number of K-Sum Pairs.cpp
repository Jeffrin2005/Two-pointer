class Solution {
public:
/*
Time complexity:O(nlogn)
Space complexity:o(1)
*/
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); 
        int i = 0; 
        int j = nums.size() - 1;
        int count = 0; 
        while (i < j){
            int sum = nums[i] + nums[j];
            if(sum == k){
                count++; 
                i++; 
                j--; 
            } else if(sum < k){
                i++; 
            }else{
                j--; 
            }
        }
        
        return count;
    }
};