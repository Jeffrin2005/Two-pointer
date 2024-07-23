#define ll long long 
class Solution {
public:
// time comp = o(n), space comp = o(1)
    long long minimumSteps(string s) {
      ll ans = 0;
        ll ones = 0; 
        ll n = s.size();
        for(ll i = 0;i<n;i++){
            if(s[i]=='1')   
                ones++;
            else{
                ans+=ones;
            }
        }
        return ans;
    }
};
