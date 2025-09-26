class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int mid;
        for(int i=0;i<nums.size();i++){
            mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                     e--;
                }else{
                   s++;
                }    
        }

        return -1;

    }
};