class Solution {
public:
    void findCombination(int id, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& dp) {
        if (target == 0) {
            ans.push_back(dp);
            return;
        }
        
        if (id == arr.size() || target < 0) {
            return;
        }

        for (int i = id; i < arr.size(); i++) {
            if (i > id && arr[i] == arr[i - 1]) continue; // Skip duplicates

            if (arr[i] > target) break; // Prune the search space

            dp.push_back(arr[i]);
            findCombination(i + 1, target - arr[i], arr, ans, dp);
            dp.pop_back();  // Backtrack
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());  // Sort to handle duplicates
        vector<vector<int>> ans;
        vector<int> dp;
        findCombination(0, target, candidates, ans, dp);
        return ans;
    }
};
