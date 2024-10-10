class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int X) {
        int N=mat.size();
        int row = 0;
        int col=mat[0].size()-1;
         while (row < N && col >= 0) {
            if (mat[row][col] == X) {
                return 1; // Found X
            } else if (mat[row][col] > X) {
                col--; // Move left
            } else {
                row++; // Move down
            }
        }
        return 0;
    }
};