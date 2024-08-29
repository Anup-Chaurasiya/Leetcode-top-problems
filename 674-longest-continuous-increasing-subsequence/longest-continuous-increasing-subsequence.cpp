class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxi=1;
            int count=1;
            for(int j=0;j<nums.size()-1;j++){
                if(nums[j]<nums[j+1]){
                count++;
                maxi=max(count,maxi);
                }
                else
                count=1;
            }
        return maxi;
    }
};