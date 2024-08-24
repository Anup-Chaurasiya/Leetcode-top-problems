class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        int ans=0;
        int pre=0;
        sort(nums.begin(),nums.end());
        for(int current=1;current<nums.size();current++){
            if(nums[current][0]<nums[pre][1]){
                ans++;
                if(nums[current][1]<nums[pre][1])
                   pre=current;

            }
            else{
                pre=current;
            }
        }
        return ans;
    }
};