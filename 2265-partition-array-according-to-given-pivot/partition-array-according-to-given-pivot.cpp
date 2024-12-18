class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        int count = 0 ;
        vector<int>res;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                res.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                count++;
            }
        }
        while(count--){
            res.push_back(pivot);
        }
        for(int i=0;i<n;i++){
            if(nums[i]>pivot){
                res.push_back(nums[i]);
            }
        }

        int i=0;
        while(i<n){
            nums[i] = res[i];
            i++;
        }
        return nums;
    }
};