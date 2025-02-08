class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i = 0 ;
        int sum = 0 ;
        int maxSum = nums[0] ;

        while(i<nums.size()){
            sum += nums[i];

            maxSum = max(maxSum,sum);

            if(sum<0) sum = 0;

            i++;
        } 
        return maxSum;
    }
};