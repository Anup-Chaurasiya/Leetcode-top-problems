class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int buttom=matrix.size()-1;
        int right=matrix[0].size()-1;

        int top=0;
        int left=0;

        while(top<=buttom && left<=right){

            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
                
            }
            top++;
             for(int i=top;i<=buttom;i++){
                ans.push_back(matrix[i][right]);
               
            } 
            right--;
            if(top<=buttom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[buttom][i]);
            }
            }
            buttom--;

            if(left<=right){
            for(int i=buttom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            }
            left++;

        }

        return ans;

    }
};