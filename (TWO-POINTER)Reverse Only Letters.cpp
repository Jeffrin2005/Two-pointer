class Solution {
public:
    string reverseOnlyLetters(string s) {
      // time comp =O(n) space comp = o(1)
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            // Move left pointer to the next alphabetical character
            while (left < right && !isalpha(s[left])){
                left++;
            }
            // Move right pointer to the previous alphabetical character
            while (left < right && !isalpha(s[right])) {
                right--;
            }
            // Swap the characters at left and right pointers
            if(left < right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};
