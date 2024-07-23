
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;
        /*
        // time comp = o(n^2) space comp = O(1)
        for any three sides a b c
              * a + b > c
             * a + c > b
            * b + c > a
        */
        int n = nums.size();
        
        for (int i = 2 ; i < n ; i++) {// for(int i=2; i<n; i++) also possible 
            int left = 0, right = i - 1;// intitially left = 0'th index and right = 1'th index 
            while(left < right){
                if (nums[left] + nums[right] > nums[i]) {
                    count += (right - left);// if nnums[left] + nums[right] > nums[i] satisfies then the the no of trianlge pair will be right - left;
                    right--;
                }else{
                    left++;
                }
            }
        }
        return count;
    }
};
