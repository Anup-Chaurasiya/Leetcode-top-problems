class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int row = image.size();
        int col = image[0].size();

        for(int i=0;i<row;i++){
            int s=0;
            int e=col-1;
            while(s<e){
                swap(image[i][s++],image[i][e--]);
            }
        }
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col;j++){
                if(image[i][j]==0){
                    image[i][j]=1;
                }
                else{
                    image[i][j]=0;
                }
            }
        }
        return image;
    }
};