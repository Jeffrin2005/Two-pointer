class Solution {
public:
/*
Time complexity:o(n)
Space complexity:o(n) // just for creating an perm (not necessary also we can say o(1))
*/
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int>perm(n + 1);
        int low = 0;
        int  high = n;
        for (int i = 0; i < n;i++){
            if(s[i] == 'I'){
                perm[i] = low;
                low++;
            }else{
                perm[i] = high;
                high--;
            }
        }

        // The last element is the remaining number
     //   perm[i] > perm[i + 1].so last must be a low value 
        perm[n] = low; // low should be equal to high here
        return perm;
    }
};
