class Solution {
public:
    void combination(int start, int n, int k, vector<int>& pair, vector<vector<int>>& ans) {
        if (pair.size() == k) {
            ans.push_back(pair);
            return;
        }

        for (int i = start; i <= n; i++) {
            pair.push_back(i);
            combination(i + 1, n, k, pair, ans);
            pair.pop_back(); // Backtrack
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> pair;
        combination(1, n, k, pair, ans);
        return ans;
    }
};
