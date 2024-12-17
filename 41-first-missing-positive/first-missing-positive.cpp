class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        bool contains  = false ;

        for(int i=0;i<n;i++){
            if(nums[i]==1){
                contains = true;
            }
            else if(nums[i]<=0 || nums[i]>n){
                nums[i] = 1;
            }
        }
        if(contains==false){
            return 1;
        }
        for(int i=0;i<n;i++){
            int index = abs(nums[i]);
            int idx = index-1;

            if(nums[idx]<0){
                continue;
            }
            nums[idx] *= -1;
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        return n+1;
    }
};