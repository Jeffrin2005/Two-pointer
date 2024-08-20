class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        int n = points.size();
        sort(points.begin() , points.end());
        int ans = 1;
        int j = 0;
        int i = 0;
        while(i<n && j<n)
        {
            if((points[i][0]<=points[j][0]) && (points[j][0]-points[i][0] <= w))
            {
                j++;
            }
            else{
                ans++;
                i = j;
            }
        }
        
        return ans;        
    }
};
