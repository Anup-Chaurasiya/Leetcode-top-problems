class Solution {
public:
    // Optimized DP function with O(1) space complexity
    int solveTailDpSpace(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];  // Single element, just return it.

        int pre2 = 0;       // Maximum sum excluding the previous two elements
        int pre1 = nums[0]; // Maximum sum including the previous element

        for (int i = 1; i < n; i++) {
            int incl = pre2 + nums[i];   // Include current element
            int excl = pre1;             // Exclude current element
            int ans = max(incl, excl);   // Max of both options
            pre2 = pre1;                 // Update for the next iteration
            pre1 = ans;
        }

        return pre1; // Return the result for the entire array
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;        // No houses to rob.
        if (n == 1) return nums[0];  // Only one house to rob.

        // Split into two cases: one excluding the last house, one excluding the first
        vector<int> first(nums.begin(), nums.end() - 1);  // Exclude the last house
        vector<int> second(nums.begin() + 1, nums.end()); // Exclude the first house

        // Calculate the max sum for both cases
        int ans1 = solveTailDpSpace(first);
        int ans2 = solveTailDpSpace(second);

        // Return the maximum of both cases
        return max(ans1, ans2);
    }
};
