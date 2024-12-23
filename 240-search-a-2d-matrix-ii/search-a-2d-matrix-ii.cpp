class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row  = matrix.size()-1;
        int col = matrix[0].size()-1;
        int r=0;
        while(r<=row && col>=0){
            if(matrix[r][col]==target){
                return true;
            }
            else if(matrix[r][col]<target){
                r++;
            }
            else{
                col--;
            }
        }
        return false;
    }
};