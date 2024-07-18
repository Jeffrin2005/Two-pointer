/*
a = 5 (in binary: 101)
b = 3 (in binary: 011)
We can swap a and b using XOR without needing a temporary variable:
1. a = a ^ b → 101 ^ 011 = 110 (so now a = 6)
2. b = a ^ b → 110 ^ 011 = 101 (so now b = 5, which was the original value of a)
3. a = a ^ b → 110 ^ 101 = 011 (so now a = 3, which was the original value of b)
After these operations, a becomes 3 and b becomes 5, effectively swapping their values.
*/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for(auto&row : image){
            int i = 0, j = n - 1;
            while (i <= j){
                if(i == j){
                    row[i] ^= 1; // Invert the middle element when i == j in odd length rows
                }else{
                    // Swap using XOR and invert
                    row[i] ^= row[j];
                    row[j] ^= row[i];
                    row[i] ^= row[j];
                    row[i] ^= 1;
                    row[j] ^= 1;

                }
               i++;
                j--;
            }
        }
        return image;
    }
};
