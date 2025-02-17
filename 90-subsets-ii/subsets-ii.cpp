class Solution {
public:
    void findsubset(int index,vector<int>&nums,vector<vector<int>>&ans,vector<int>&pair){
        if(index==nums.size()){
            ans.push_back(pair);
            return ;
        }
        pair.push_back(nums[index]);
        findsubset(index+1,nums,ans,pair);
        pair.pop_back();
        while(index+1 < nums.size() && nums[index]==nums[index+1]) index++;
        findsubset(index+1,nums,ans,pair);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>pair;
        findsubset(0,nums,ans,pair);
        return ans;
    }
};