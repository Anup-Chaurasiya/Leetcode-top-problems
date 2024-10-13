class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int ans = 0;
        bool odd = false;
        for (auto it : s) {
            mp[it]++;
        }
        for (auto [ch, fre] : mp) {
            if (fre % 2 == 0) {
                ans += fre;
            } else {
                ans += fre - 1;
                odd = true;
            }
        }
        if (odd)
            ans += 1;
        return ans;
    }
};