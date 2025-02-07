class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int > mpp;
        int n =nums.size();

        for(int i=0;i<n;i++){
            int a = target - nums[i];
            if(mpp.count(a)){
                return {i,mpp[a]};
            }
            else{
                mpp[nums[i]]=i;
            }
        } 
        return {0};
    }
};