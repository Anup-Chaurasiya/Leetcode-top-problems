class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) {
            return false;  // Different lengths can't be close
        }

        unordered_map<char, int> mpp1, mpp2;
        unordered_set<char> fre1, fre2;
        multiset<int> freq1, freq2;

        // Count frequencies of characters in word1 and word2
        for (char ch : word1) {
            mpp1[ch]++;
            fre1.insert(ch);
        }
        for (char ch : word2) {
            mpp2[ch]++;
            fre2.insert(ch);
        }

        // If the sets of unique characters are not the same, return false
        if (fre1 != fre2) {
            return false;
        }

        // Insert frequencies into multisets for comparison
        for (auto& it : mpp1) {
            freq1.insert(it.second);
        }
        for (auto& it : mpp2) {
            freq2.insert(it.second);
        }

        // If the frequency distributions match, the strings are close
        return freq1 == freq2;
    }
};
