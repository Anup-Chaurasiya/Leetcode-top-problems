class Solution {
public:

int solveTailDpSpace(vector<int>&nums){

    int n=nums.size();
    if(n==0) return 0;
    if(n==1) return nums[0];
    
    int pre2=0;
    int pre1=nums[0];

    for(int i=1;i<n;i++){
        int incl=pre2 + nums[i];
        int excl=pre1 + 0;
        int ans = max(incl,excl);
        pre2=pre1;
        pre1=ans;
    }

    return pre1;

}
    int rob(vector<int>& nums) {
       return solveTailDpSpace(nums);
    }
};