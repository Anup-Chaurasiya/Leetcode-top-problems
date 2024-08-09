class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                     e--;
                }else{
                   s++;
                }    
             mid=s+(e-s)/2;
        }

        return -1;

    }
};