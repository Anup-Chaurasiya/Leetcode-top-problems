class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int count =0;
        int s=0,e=0;
        int m=0;

        while(e<nums.size()){
            if(nums[e]>right){
                m=0;
                s=e+1;
            }
            else if(nums[e]>=left && nums[e]<=right){
                m=e-s+1;
            }
            count +=m;
            e++;
        }
        return count;
    }
};