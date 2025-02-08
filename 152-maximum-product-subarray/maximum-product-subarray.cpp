class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prefix = 1;
        int postfix = 1;
        int maxProduct = INT_MIN;

        for(int i=0;i<n;i++){
            if(prefix==0) prefix = 1 ;
            if(postfix==0) postfix = 1 ;

            prefix *= nums[i];
            postfix *= nums[n-i-1];
            maxProduct = max(maxProduct,max(prefix,postfix));
        } 
        return maxProduct;
    }
};