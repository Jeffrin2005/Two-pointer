class Solution {
public:
/*
Time complexity:O(N)
Space complexity:O(N+M)
*/
    string addSpaces(string s, vector<int>& spaces) {
       int n = s.length();
        int m = spaces.size();
        string result;
        int i = 0; // Pointer for iterating through the original string
        int j = 0; // Pointer for iterating through the spaces array
        while(i < n){
            // If the current index matches the next space position
            if(j < m && i == spaces[j]){
                result+=' '; // Insert a space
                j++; // Move to the next space position
            }
            result+=s[i]; // Append the character from the original string
            i++; // Move to the next character in the original string
        }

        return result;
    }  
    
};
