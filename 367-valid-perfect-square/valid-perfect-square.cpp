class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 2) {
            return true;  // 0 and 1 are perfect squares
        }

        long long left = 2, right = num / 2; // Start from 2, as 1 is already checked
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;

            if (square == num) {
                return true;
            } else if (square < num) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return false;
    }
};