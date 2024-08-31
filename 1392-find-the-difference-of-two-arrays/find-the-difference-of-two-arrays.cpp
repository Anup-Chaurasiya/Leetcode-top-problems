class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<vector<int>> result(2);

        for (int a : set1) {
            if (set2.find(a) == set2.end()) {
                result[0].push_back(a);
            }
        }

        for (int b : set2) {
            if (set1.find(b) == set1.end()) {
                result[1].push_back(b);
            }
        }

        return result;
    }
};
