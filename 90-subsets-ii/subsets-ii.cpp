class Solution {

private:

   void findSubsetDup(vector<int>& nums,int index,vector<int>sub, vector<vector<int>> &result,int n){
        if(index==n){
            result.push_back(sub);
            return ;
        }

        sub.push_back(nums[index]);
        findSubsetDup(nums,index+1,sub,result,n);
        sub.pop_back();
        while(index+1<n && nums[index]==nums[index+1]) index++;
        findSubsetDup(nums,index+1,sub,result,n);

    }




public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        int n=nums.size();
        vector<int>sub;
        findSubsetDup(nums,0,sub,result,n);
        sort(result.begin(),result.end());


        return result;

    }
};