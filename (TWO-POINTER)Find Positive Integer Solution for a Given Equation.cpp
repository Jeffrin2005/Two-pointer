
class Solution {
public:
/*
Time complexity: O(N), where N = 1000 (the maximum range of x or y).
Space complexity:O(M), where M is the number of pairs that satisfy f(x, y) = z
*/
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>> result;
        int x = 1, y = 1000;
        while (x <= 1000 && y >= 1) { // x and y in the range of 1 to 1000 intialy the x = 1 and y = 1000
            int value = customfunction.f(x, y);
            if (value == z) {//
    //If f(x, y) == z: The current pair (x, y) is added to result, and x is incremented to explore the next potential value.
                result.push_back({x, y});
                x++;  
            }else if(value < z){
        // If f(x, y) < z: Increment x to increase the value of f(x, y) because the function is monotonically increasing.
                x++;  
            }else{
            // f(x, y) > z: Decrement y to decrease the value of f(x, y).
                y--;  
            }
        }
        
        return result;
    }
};
