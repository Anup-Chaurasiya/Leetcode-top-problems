class Solution {
public:
    bool isHappy(int num) {
         unordered_set<int> visit;
        while (num != 1 && !visit.count(num)) {
            visit.insert(num);
            int ans = 0;
            while (num != 0) {
                int rem = num % 10;
                num /= 10;
                ans += rem * rem;
            }
            num = ans;
        }
        return num == 1;
    }
};