
class Solution {
// TIME COMP = O(N) , SPACE COMP = o(1)
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right) {
            // Calculate the current area
            int current_height = min(height[left], height[right]);// the water will remain in the lowest height 
            int current_width = right - left;// finding the length (Area = length * height);
            int current_area = current_height * current_width;
            
            // Update the maximum area found so far
            max_area = max(max_area, current_area);
            // Move the pointer pointing to the shorter line
            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return max_area;
    }
};
