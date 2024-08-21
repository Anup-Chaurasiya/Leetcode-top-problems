class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         if (nums.empty()) return 0;
        unordered_set<int> hash;
        for (auto it : nums) {
            hash.insert(it);
        }

        int largest = 0;
        for (int i = 0; i < nums.size(); i++) {

            if (!hash.count(nums[i] - 1)) {
                int currentNum = nums[i];
                int currentStreak = 1;

                while (hash.count(currentNum + 1)) {
                    currentNum += 1;
                    currentStreak += 1;
                }
                largest = max(currentStreak, largest);
            }
        }
        return largest;
    }
};
