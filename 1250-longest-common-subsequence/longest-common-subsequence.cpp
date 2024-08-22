class Solution {
       
private:
    int lcsRecursive(const string& text1, const string& text2, int i, int j, vector<vector<int>>& memo) {
        if (i >= text1.size() || j >= text2.size()) {
            return 0;
        }
        if (memo[i][j] != -1) {
            return memo[i][j];
        }
        if (text1[i] == text2[j]) {
            memo[i][j] = 1 + lcsRecursive(text1, text2, i + 1, j + 1, memo);
        } else {
            memo[i][j] = max(lcsRecursive(text1, text2, i + 1, j, memo),
                             lcsRecursive(text1, text2, i, j + 1, memo));
        }
        
        return memo[i][j];
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        vector<vector<int>> memo(m, vector<int>(n, -1));
        return lcsRecursive(text1, text2, 0, 0, memo);
    }
    
};