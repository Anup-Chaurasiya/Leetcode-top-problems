class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix=1,n=nums.size();
        vector<int>ans(n,1);

        for(int i=0;i<n;i++){
           ans[i]=prefix;
           prefix *=nums[i]; 
        }
        int postfix=1;
        for(int i=n-1;i>=0;i--){
            ans[i] *=postfix;
            postfix *=nums[i];
        }

        return ans;
    }
};