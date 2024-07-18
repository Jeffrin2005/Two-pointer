class Solution {
public:
    int countPairs(vector<int>& v, int target) {
        int n = v.size();
        int i= 0;
        int ans =0;
        sort(v.begin(),v.end());
        while(i < n){
            int j = i + 1;
            while(j < n && v[i] + v[j] < target){
                ans++;
                j++;
            }
            i++;
        }
        return ans;

    }
};
