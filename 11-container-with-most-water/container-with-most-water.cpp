class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0;
        int j = n-1;
        int mini ;
        int area;
        int MaxArea = 0;

        while(i<j){
            mini = min(height[i],height[j]);
            area = mini * (j-i);
            MaxArea = max(MaxArea,area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return MaxArea;
    }
};