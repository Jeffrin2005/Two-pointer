class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev = 0;
        int curr= 1;
        int sum =0;
        int n = s.size();
        for(int i=1; i<n; i++){
            if(s[i] == s[i-1]){
                curr++;
            }else{
                sum+= min(curr, prev);
                prev = curr;
                curr = 1; 
            }
        }
         sum+= min(curr, prev);
        return sum;
        
    }
};
