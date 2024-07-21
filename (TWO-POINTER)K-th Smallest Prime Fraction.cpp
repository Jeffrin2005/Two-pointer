

class Solution {
// TIME COMP = O(N^2) SPACE COMP = o(N)
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        // Vector to store the fractions and their corresponding numerators and denominators
        vector<pair<double,pair<int, int>>>fractions;
        int n = arr.size();
        for(int i = 0; i<n;i++){
            for(int j = i + 1; j < n; j++){
                double value = (double)arr[i] / arr[j];
                fractions.push_back({value, {arr[i], arr[j]}});
            }
        }
        // Sort fractions based on their values
        sort(fractions.begin(), fractions.end());
        // Return the k-th smallest fraction
        return {fractions[k - 1].second.first, fractions[k - 1].second.second};
    }
};
