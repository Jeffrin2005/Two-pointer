
class Solution {
public:
/*

// testing purpose
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1(nums1.begin(), nums1.end());
        set<int> resultSet;
        vector<int> result;
        for(auto&num : nums2){
            
            if (set1.find(num) != set1.end()) {
                resultSet.insert(num);
            }
        }
//resultSet to vector
        result.assign(resultSet.begin(), resultSet.end());
        return result;
    }
};
