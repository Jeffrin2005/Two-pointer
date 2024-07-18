class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = 0; 
        int j = word.find(ch); // Find the first occurrence of ch
        if (j != string::npos) { // Check if ch is found
            while (i < j) { 
                swap(word[i], word[j]);
                i++; 
                j--;
            }
        }
        return word; 
    }
};
