class Solution {
    private:
    bool checkDig(int n, vector<string>& bridge, int i, int j){
        // check left dia
        int row=i,col=j;
        while(row>-1 && col>-1){
            if(bridge[row][col]=='Q'){
                return 0;
            }
            row--;
            col--;
        }

        // check right dia
        row=i,col=j;
         while(row>-1 && col<n){
            if(bridge[row][col]=='Q'){
                return 0;
            }
            row--;
            col++;
        }
        return 1;
    }

    void findSolution(int row, int n, vector<string>& bridge, vector<vector<string>>& ans, vector<bool>&colomn){
        // base case
        if(row==n){
            ans.push_back(bridge);
            return ;
        }

        // operations

        for(int j=0;j<n;j++){
            if(colomn[j]==0 && checkDig(n,bridge,row,j)){
                colomn[j]=1;
                bridge[row][j]='Q';
                findSolution(row+1,n,bridge,ans,colomn);
                 colomn[j]=0;
                bridge[row][j]='.';

            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>>ans;
        vector<string>bridge(n);
        vector<bool>colomn(n,0);

        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        bridge[i].push_back('.');

        findSolution(0,n,bridge,ans,colomn);

        return ans;
    }
};