class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
         int i = 0; 
    int j = 0; 
    int n1 = nums1.size();
    int n2 = nums2.size();
    while (i < n1 && j < n2){
        if(nums1[i] == nums2[j]){
            return nums1[i]; // Found a common element
        }else if(nums1[i] < nums2[j]) {
            i++; // Move pointer in nums1
        }else{
            j++; // Move pointer in nums2
        }
    }
    return -1; 
    }
};
