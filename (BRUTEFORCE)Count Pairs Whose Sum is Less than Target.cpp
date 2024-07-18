class Solution {
public:
    int countPairs(vector<int>& v, int target) {
        int n = v.size();
        int i= 0;
        int ans =0;
        while(i < n){
            int j = i + 1;
            while(j < n){
                if(v[i] + v[j] < target) ans++; j++;
            }
            i++;
        }
        return ans;

    }
};
