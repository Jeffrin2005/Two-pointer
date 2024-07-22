
class Solution {
public:
// time comp = o(nlogn + mlogm) space comp = o(n)
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> jobs;
        for (int i = 0; i < difficulty.size();i++){
            jobs.emplace_back(difficulty[i], profit[i]);
        }
        sort(jobs.begin(), jobs.end());
        sort(worker.begin(), worker.end());
        int maxProfit = 0, totalProfit = 0, jobIndex = 0;
        for(auto&ability : worker){
            // jobs[jobIndex].first = difficulty of current job 
            while(jobIndex < jobs.size() && jobs[jobIndex].first <= ability){// worker will do the job until it crosses his ability and finding the maximum score among in these scores 
                maxProfit = max(maxProfit, jobs[jobIndex].second);
                jobIndex++;
            }
            totalProfit+=maxProfit;
        }
        return totalProfit;
    }
};
