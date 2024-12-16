class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;

        // Find the minimum and maximum values in the array
        int minValue = *min_element(nums.begin(), nums.end());
        int maxValue = *max_element(nums.begin(), nums.end());

        // Calculate bucket size and number of buckets
        int bucketSize = max(1, (maxValue - minValue) / (n - 1));
        int bucketCount = (maxValue - minValue) / bucketSize + 1;

        // Initialize buckets
        vector<int> bucketMin(bucketCount, INT_MAX);
        vector<int> bucketMax(bucketCount, INT_MIN);
        vector<bool> bucketUsed(bucketCount, false);

        // Place numbers into buckets
        for (int num : nums) {
            int bucketIndex = (num - minValue) / bucketSize;
            bucketMin[bucketIndex] = min(bucketMin[bucketIndex], num);
            bucketMax[bucketIndex] = max(bucketMax[bucketIndex], num);
            bucketUsed[bucketIndex] = true;
        }

        // Calculate the maximum gap
        int maxGap = 0, previousMax = minValue;
        for (int i = 0; i < bucketCount; i++) {
            if (!bucketUsed[i]) continue; // Skip empty buckets
            maxGap = max(maxGap, bucketMin[i] - previousMax);
            previousMax = bucketMax[i];
        }

        return maxGap;
    }
};
