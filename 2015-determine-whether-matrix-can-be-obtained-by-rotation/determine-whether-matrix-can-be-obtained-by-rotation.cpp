class Solution {
private:
     void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        int row = 0;
        while (row < n) {
            int s = 0;
            int e = n - 1;
            while (s < e) {
                int temp = matrix[row][s];
                matrix[row][s] = matrix[row][e];
                matrix[row][e] = temp;
                s++;
                e--;
            }
            row++;
        }
    }
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0;i<4;i++){
            if(mat==target) return true;
            rotate(mat);
        }
        return false;
    }
};