class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=0;
        int min=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int first=nums[i];
            int s=i+1,e=nums.size()-1;
            while(s<e){
                if(first + nums[s] + nums[e] == target) return target;
                if(abs(first + nums[s] + nums[e] - target) < min){
                    min=abs(first + nums[s] + nums[e] - target);
                    ans=first + nums[s] + nums[e];
                }
                if(first + nums[s] + nums[e] > target) e--;
                else
                s++;
            }
        }
        return ans;
    }
};