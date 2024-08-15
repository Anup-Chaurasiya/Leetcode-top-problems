class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0; // Handle edge case for empty input
        
        int leftmost = height[0], rightmost = height[height.size() - 1];
        int ans = 0, index = 0;
        int n = height.size();

        // Find the index of the highest bar
        int maxheight = height[0];
        for (int i = 1; i < n; i++) {
            if (height[i] > maxheight) {
                maxheight = height[i];
                index = i;
            }
        }

        // Calculate trapped water from left to highest bar
        int i = 1;
        while (i < index) {
            if (leftmost > height[i]) {
                ans += (leftmost - height[i]);
            } else {
                leftmost = height[i];
            }
            i++;
        }

        // Calculate trapped water from right to highest bar
        int e = n - 2;
        while (e > index) {
            if (rightmost > height[e]) {
                ans += (rightmost - height[e]);
            } else {
                rightmost = height[e];
            }
            e--;
        }

        return ans;
    }
};
