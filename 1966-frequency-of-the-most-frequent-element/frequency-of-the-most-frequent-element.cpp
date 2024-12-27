class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i = 0, j=0;
        long long sum = 0 ;
        long long target ;
        int result = 0;


        while(j<n){
            sum +=nums[j];
            target = nums[j];
            if((j-i+1)*target - sum >k){
                sum -=nums[i];
                i++;
            }
            result  = max(result,(j-i+1));
            j++;
        }
        return result ;
    }
};