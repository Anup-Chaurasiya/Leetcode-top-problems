class Solution {
public:
    void permutaion(vector<int>& arr, vector<vector<int>>& ans, int idx) {
        if (idx == arr.size()) {
            ans.push_back(arr);
            return;
        }
        unordered_set<int> used;
        for (int i = idx; i < arr.size(); i++) {
            if (used.find(arr[i]) != used.end())
                continue; // Skip duplicates
            used.insert(arr[i]);
            swap(arr[idx], arr[i]);
            permutaion(arr, ans, idx + 1);
            swap(arr[idx], arr[i]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        permutaion(nums, ans, 0);
        return ans;
    }
};