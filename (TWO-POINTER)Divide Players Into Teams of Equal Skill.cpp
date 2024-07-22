#define ll long long 
class Solution {
public:
// time comp = O(N) , space comp = O(1)
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        int target = skill[0] + skill[n - 1]; // This is a strategic choice to ensure that all teams have equal total skills,
        // which is a requirement of the problem.
       ll sumChemistry = 0;
        int i = 0;
        int  j = n - 1;
        while(i < j){
            if(skill[i] + skill[j] != target) {
                return -1; // If any pair doesn't match the target sum, return -1
            }
            sumChemistry+=skill[i] * skill[j];
            i++;
            j--;
        }
        return sumChemistry;
    }
};
