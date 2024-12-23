class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row  = mat.size();
        int col  = mat[0].size();
        vector<vector<int>> ans(r,vector<int>(c));

        if(row*col != r*c) return mat;
        int s=0;
        int e=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                ans[s][e]=mat[i][j];
                e++;
                if(e==c){
                    s++;
                    e=0;
                }
            }
        }
        return ans;
    }
};