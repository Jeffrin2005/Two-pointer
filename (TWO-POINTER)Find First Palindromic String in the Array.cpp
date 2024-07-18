bool isPalindrome(string&s){
    int left = 0;
    int right = s.size() - 1;
    while(left < right){
        if(s[left] != s[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto&word : words){
            if(isPalindrome(word)) {
                return word;
            }
        }
        return "";
    }
};
