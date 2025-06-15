class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<bool> trustsSomeone(n + 1, false);
        vector<int> trustedByCount(n + 1, 0);
        
        for (const auto& relation : trust) {
            int a = relation[0];
            int b = relation[1];
            trustsSomeone[a] = true;
            trustedByCount[b]++;
        }
        
        for (int i = 1; i <= n; ++i) {
            if (!trustsSomeone[i] && trustedByCount[i] == n - 1) {
                return i;
            }
        }
        
        return -1;
    }
};