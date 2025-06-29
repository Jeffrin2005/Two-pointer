
#define ll long long 
class Solution {
public:
    ll findTheArrayConcVal(vector<int>& nums) {
        ll n = nums.size();
        ll ans = 0;
        ll i = 0;
        ll  j = n - 1;
        // instead of ll u can use long long
        while (i < j){
          string s =to_string(nums[i]) +to_string(nums[j]);  
            ans+=stoll(s);  
            i++;  
            j--;  
        }
        if(i == j) ans+=nums[i]; 
        return ans;
    }
};
