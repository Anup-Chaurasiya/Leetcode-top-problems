class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size() - 1;
        int start = 0;
        while (start < row && col >= 0 ) {
            if (matrix[start][col] == target) {
                return true;
            } else if (matrix[start][col] > target) {
                col--;
            }
            else{
                start++;
            }
        }
        return false;
    }
};