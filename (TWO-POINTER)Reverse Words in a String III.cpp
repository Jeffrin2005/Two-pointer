
class Solution {
public:
    string reverseWords(string s) {
        int start = 0; // Start index of a word
        for (int i = 0; i <= s.length(); ++i) {
            if (i == s.length() || s[i] == ' ') {
                // Reverse the current word
                reverse(s.begin() + start, s.begin() + i); // Corrected end iterator
                // Move start to the next word
                start = i + 1;
            }
        }
        return s;
    }
};
