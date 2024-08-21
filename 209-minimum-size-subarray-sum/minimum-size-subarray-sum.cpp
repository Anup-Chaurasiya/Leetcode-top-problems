class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s=0,e=0;
        int sum=0;
        int size=INT_MAX;
        while(e<nums.size()){
            sum +=nums[e];

            while(sum>=target){
                size=min(size,e-s+1);
                sum -= nums[s++];
            }

            e++;

        }

        return size == INT_MAX ? 0 : size ;
    }
};