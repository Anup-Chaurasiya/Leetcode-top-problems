class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n));
        int top = 0;
        int buttom = n-1;
        int right = n-1;
        int left = 0;

        int count  = 1;
        while(top<=buttom && left<=right){

            for(int i=left;i<=right;i++){
                matrix[top][i] = count++;
                
            }
            top++;
             for(int i=top;i<=buttom;i++){
                matrix[i][right] = count++;
               
            } 
            right--;
            if(top<=buttom){
            for(int i=right;i>=left;i--){
                matrix[buttom][i] = count++;
            }
            }
            buttom--;

            if(left<=right){
            for(int i=buttom;i>=top;i--){
                matrix[i][left] = count++;
            }
            }
            left++;

        }
        return matrix;

    }
};