
/*
Time complexity:o(n+m)
Space complexity:o(n+m)

    */
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        int pointer_a = 0, pointer_b = 0;
        vector<vector<int>> result;
        int n1 = A.size();
        int n2 = B.size();
        while (pointer_a < n1 && pointer_b < n2){
            // Check if there is an overlap between A[pointer_a] and B[pointer_b]
            if(B[pointer_b][0] <= A[pointer_a][1] && A[pointer_a][0] <= B[pointer_b][1]){
                // Calculate the start and end of the intersection
                int start = max(A[pointer_a][0], B[pointer_b][0]);
                int end = min(A[pointer_a][1], B[pointer_b][1]);
                result.push_back({start, end});
            }
            // Move the pointer that has the smaller endpoint, just increasing if the next interval will in the current highest range 
            // so we incremnet the smallest
            if(A[pointer_a][1] < B[pointer_b][1]){
                pointer_a++;
            }else{
                pointer_b++;
            }
        }
        return result;
    }
};
