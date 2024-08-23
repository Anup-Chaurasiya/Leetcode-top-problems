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

        // Take the current element
        if (arr[id] <= target) {
            dp.push_back(arr[id]);
            findCombination(id, target - arr[id], arr, ans, dp);
            dp.pop_back();  // Backtrack
        }

        // Skip the current element
        findCombination(id + 1, target, arr, ans, dp);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> dp;
        findCombination(0, target, candidates, ans, dp);
        return ans;
    }
};
