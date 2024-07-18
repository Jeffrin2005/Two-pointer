
class Solution {
public:
    double minimumAverage(std::vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        int left = 0;
        int right = nums.size() - 1;
        double minAvg = INT_MAX;
        while(left < right){
            double avg = (nums[left] + nums[right]) / 2.0; 
            minAvg = min(minAvg, avg); 
            left++;  
            right--; 
        }
        return minAvg; 
    }
};
