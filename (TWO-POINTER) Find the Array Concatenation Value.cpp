
#define ll long long 
class Solution {
public:
    ll findTheArrayConcVal(vector<int>& nums) {
        ll n = nums.size();
        ll ans = 0;
        ll i = 0;
        ll  j = n - 1;
        while (i < j){
          string s =to_string(nums[i]) +to_string(nums[j]);  // concatenating num[i] and num[j]
            ans+=stoll(s);  // Convert the concatenated string back to a int(long long) and add to ans.
            i++;  
            j--;  
        }
        if(i == j) ans+=nums[i];  // If there's one element left in the middle, add it to ans.
        return ans;
    }
};
