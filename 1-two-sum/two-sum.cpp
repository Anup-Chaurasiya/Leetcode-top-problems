class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexedNums;  // Pair of (value, index)
        
        // Store original indices
        for (int i = 0; i < nums.size(); i++) {
            indexedNums.push_back({nums[i], i});
        }
        
        // Sort based on the values
        sort(indexedNums.begin(), indexedNums.end());
        
        // Two-pointer approach
        int s = 0, e = nums.size() - 1;
        vector<int> ans;
        
        while (s < e) {
            int sum = indexedNums[s].first + indexedNums[e].first;
            if (sum == target) {
                ans.push_back(indexedNums[s].second);
                ans.push_back(indexedNums[e].second);
                break;
            }
            else if (sum > target) {
                e--;
            }
            else {
                s++;
            }
        }
        
        return ans;
    }
};
