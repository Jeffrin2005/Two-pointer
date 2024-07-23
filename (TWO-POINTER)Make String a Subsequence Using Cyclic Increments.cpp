

class Solution {
public:
// time comp = o(n) space comp = o(1);
    bool canMakeSubsequence(string str1, string str2) {
        int n1 = str1.size();
        int  n2 = str2.size();
        int i = 0;// for str1
        int  j = 0;// for str2
        while (i < n1 && j < n2) {
            if (str1[i] == str2[j]){
                i++;
                j++;
            }else{
            char nextChar;
             if(str1[i] == 'z') nextChar = 'a';
             else nextChar = str1[i] + 1;// a to b ...
             if(nextChar == str2[j]){
                    i++;
                    j++;
                }else{
                    i++;
                }
            }
        }
        // if we reach the end of str2 retrun true; 
        return j == n2;
    }
};
