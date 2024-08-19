class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index=0;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                index=i;
                break;
            }

        }
        if(index==0){
            sort(nums.begin(),nums.end());
        }
        else{
            int min=INT_MAX;
            int toswap=nums[index-1];
            for(int i=index;i<n;i++){
                if(nums[i]-toswap>0 && nums[i]-toswap<min){
                    swap(nums[index-1],nums[i]);
                }

            }
            sort(nums.begin()+index,nums.end());
        }
    }
};