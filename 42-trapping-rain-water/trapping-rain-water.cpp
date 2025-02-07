class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;
        int n = height.size(); 
        int maxi  = 0;
        int index =0 ;
        int leftmost = height[0];
        int rightmost =height[n-1] ;
        int ans =0;
        for(int i=0;i<n;i++){
            if(height[i]>maxi){
                maxi = height[i];
                index = i ; 
            }
        }
         int i = 1;
        while (i < index) {
            if (leftmost > height[i]) {
                ans += (leftmost - height[i]);
            } else {
                leftmost = height[i];
            }
            i++;
        }
        int e = n - 2;
        while (e > index) {
            if (rightmost > height[e]) {
                ans += (rightmost - height[e]);
            } else {
                rightmost = height[e];
            }
            e--;
        }

        return ans;
    }
};