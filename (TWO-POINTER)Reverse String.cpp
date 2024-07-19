class Solution {
public:
/*
Time complexity:o(n)
Space complexity:o(1)
*/
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            char temp = s[left];// instead swap(s[left],s[right])
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
};
