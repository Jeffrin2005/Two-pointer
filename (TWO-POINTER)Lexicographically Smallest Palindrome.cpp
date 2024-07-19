class Solution {
public:
// time complexity = o(n)
// space complexity = o(1)
    string makeSmallestPalindrome(string s) {
        int n = s.size();
        int i = 0; 
        int j = n - 1; 
        while(i < j){ 
            if(s[i] != s[j]){
                char x;
                if(s[i] < s[j]){
                    x = s[i];
                }else{
                    x = s[j];
                }
                s[i] = x;
                s[j] = x;
            }
            i++; 
            j--; 
        }
        return s;
    }
};
