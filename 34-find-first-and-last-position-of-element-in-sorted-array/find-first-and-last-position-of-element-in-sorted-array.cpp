class Solution {
private:
    int findindex1(vector<int>&nums,int target){
         int start = 0;
        int end = nums.size()-1;
        int left = -1;
        while(start<=end){
            int mid = start + (end-start)/2;

            if(nums[mid]==target){
                left = mid ;
                end = mid -1;
            }
            else if(nums[mid]<target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return left;

    }
    int findindex2(vector<int>&nums,int target){
        int start = 0;
        int end = nums.size()-1;
        int right = -1;
        while(start<=end){
            int mid = start + (end-start)/2;

            if(nums[mid]==target){
                right = mid ;
                start = mid + 1;
            }
            else if(nums[mid]<target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return right;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int left = findindex1(nums,target);
      int right = findindex2(nums,target);

      return {left,right};
    }
};