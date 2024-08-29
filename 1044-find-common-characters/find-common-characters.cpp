#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    void fillCount(const string &word, int count[26]) {
        for (char ch : word) {
            count[ch - 'a']++;
        }
    }

    vector<string> commonChars(vector<string>& words) {
        vector<string> result; // Ensure result is of type vector<string>
        int count[26] = {0};

        // Initialize the count array with the frequencies of the first word
        fillCount(words[0], count);

        // Update the count array for each subsequent word
        for (int i = 1; i < words.size(); ++i) {
            int temp[26] = {0};
            fillCount(words[i], temp);

            // Update the count array to reflect the minimum frequencies
            for (int j = 0; j < 26; ++j) {
                count[j] = min(count[j], temp[j]);
            }
        }

        // Build the result vector based on the final counts
        for (int i = 0; i < 26; ++i) {
            int c = count[i];
            while (c--) {
                result.push_back(string(1, i + 'a')); // Convert char to string and push_back
            }
        }

        return result;
    }
};
