class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int  j = 2;
        int ans = 0;
        while(j < n){
            if(nums[i] == 0){
                ans++;
                for(int k = i; k < i + 3; k++){
                   if(nums[k] == 0){
                    nums[k] = 1;
                  }else{
                     nums[k] = 0;
                    }
                }
            }
            i++;
             j++;
        }
        for(int i = 0; i < n; i++){
            if(nums[i] == 0) return -1;
        }
        return ans;
    }
};
