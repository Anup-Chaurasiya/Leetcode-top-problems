class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre = 1;
        vector<int> prefix(nums.size()) ;
        vector<int> postfix(nums.size()) ; 
        for(int i = 0 ; i<nums.size();i++){
            prefix[i] = pre;
            pre *= nums[i];
        }

        int post  = 1;
        for(int i = nums.size()-1; i >=0 ; i--){
            postfix[i] = post * prefix[i];
            post *= nums[i]; 
        }
        return postfix;
    }
};