class Solution {

    bool allZero(vector<int>& counter) {
        for (auto i : counter) {
            if (i != 0) {
                return false;
            }
        }
        return true;
    }

public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int k = p.size();

        vector<int> counter(26, 0);
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            counter[p[i] - 'a']++;
        }

        int i = 0, j = 0;
        while (j < n) {
            counter[s[j] - 'a']--;

            if (j - i + 1 == k) {
                if (allZero(counter)) {
                    ans.push_back(i);
                }
                counter[s[i] - 'a']++;
                i++;
            }
            j++;
        }
        return ans;
    }
};