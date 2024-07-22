class Solution {
public:
// time comp =o(n) space comp = o(1)
    int minimumLength(string s) {
        int left = 0;
        int right = s.size() - 1;
        while(left < right && s[left] == s[right]){
            char currentChar = s[left];
            // Move left pointer to the end of the left block of the same characters
            while(left <= right && s[left] == currentChar) {
                left++;
            }
            // Move right pointer to the start of the right block of the same characters
              while(right >= left && s[right] == currentChar) {
                right--;
            }
        }
        // The length of the remaining string
        return right - left + 1;
    }
};
