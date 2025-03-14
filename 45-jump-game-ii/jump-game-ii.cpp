class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0 ;
        int currentIndex = 0;
        int maxIndex  = 0;

        for(int  i = 0;i<nums.size()-1;i++){
            maxIndex = max(maxIndex, i+nums[i]);

            if(i==currentIndex){
                jump++;
                currentIndex = maxIndex;
            }
        }
        return jump;
    }
};