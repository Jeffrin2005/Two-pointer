#include <vector>

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k){
        vector<int> result;
        int n = nums.size();
        // Collect all indices where nums[j] == key
        vector<int> keyIndices;
        for (int i = 0; i < n;i++){
            if (nums[i] == key) {
                keyIndices.push_back(i);
            }
        }
        int n1 = keyIndices.size() ;
        // Check each index in nums to see if it's within k distance of any key index
        int j = 0; // Pointer to iterate through keyIndices
        for(int i = 0; i < n;i++){
            // Move j to the first key index that is within k distance to the left of i
            // means if  the i is higher that the reange of curent_key_indeice so we going for the next nearer keyindices
            while(j < n1 && i > keyIndices[j] + k){
                j++;
            }
            // Check if the current index i is within k distance of any key index
            //  keyIndices[j] - k  = start
             // keyIndices[j] + k = end 
            if (j < n1 && i >= keyIndices[j] - k && i <= keyIndices[j] + k) {
                result.push_back(i);
            }
        }

        return result;
    }
};
