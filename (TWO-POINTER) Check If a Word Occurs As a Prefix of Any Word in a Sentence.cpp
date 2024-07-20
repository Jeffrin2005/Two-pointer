

class Solution {
public:
    int isPrefixOfWord(std::string sentence, std::string searchWord) {
        int wordIndex = 1;
        int pos = 0;
        int n = sentence.size();
        int prefixLength = searchWord.size();
        // pos for sentence iteratino 
        while (pos < n) {
            // Find the end of the current word
          int end  = pos ;
            while (end < n && sentence[end] != ' ') end++;
            // Check if the current word starts with searchWord
            if (end - pos >= prefixLength && sentence.substr(pos, prefixLength) == searchWord){
                return wordIndex;
            }
            // Move to the next word
            pos = end + 1;
            wordIndex++;
        }
        return -1; 
    }
};
