class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int row,int col,int sColor){
        if(sr<0 || sr>=row || sc<0 || sc>=col ){
            return ;
        }
        else if(image[sr][sc]!=sColor){
            return ;
        }
        image[sr][sc]=color;

        dfs(image,sr-1,sc,color,row,col,sColor);
        dfs(image,sr+1,sc,color,row,col,sColor);
        dfs(image,sr,sc-1,color,row,col,sColor);
        dfs(image,sr,sc+1,color,row,col,sColor);
    }


    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color){
            return image;
        }
        int row=image.size();
        int col=image[sr].size();
        int sColor=image[sr][sc];
        dfs(image,sr,sc,color,row,col,sColor);
        return image;

    }
};