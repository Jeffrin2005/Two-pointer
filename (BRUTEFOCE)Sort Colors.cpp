/*
SIMPEL STL-BASED C++ SOLUTION ( ! IN-PLACE)
time comp = O(n), space comp = o(1)
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 =count(nums.begin(), nums.end(), 0);
        int count1 = count(nums.begin(), nums.end(), 1);
        int count2 =count(nums.begin(), nums.end(), 2);
           nums.clear();
        for(int i = 0; i < count0; ++i) nums.push_back(0);
        //fill(nums.begin(), nums.begin() + count0, 0);
        for(int i = 0; i < count1; ++i) nums.push_back(1);
         // fill(nums.begin() + count0, nums.begin() + count0 + count1, 1);
        for(int i = 0; i < count2; ++i) nums.push_back(2);
         // fill(nums.begin() + count0 + count1, nums.end(), 2);
    }
};
