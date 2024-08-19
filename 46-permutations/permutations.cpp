// class Solution {

//     private:

//     void permutation(vector<int> nums, vector<vector<int>> &ans,int index){
//         if(index>=nums.size()){
//             ans.push_back(nums);
//             return ;
//         }
//         for(int i=index;i<nums.size();i++){
//             swap(nums[index],nums[i]);
//             permutation(nums,ans,index+1);
//             // backtracking
//             swap(nums[index],nums[i]);
//         }
//     }

// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         int index=0;
//         vector<vector<int>>ans;
//         vector<int>temp;
//         permutation(nums,ans,index);

//         return ans;
//     }
// };

class Solution {

    private:

    void permutation(vector<int> nums, vector<vector<int>> &ans,vector<int>&temp,vector<bool>visited){
        if(temp.size()==visited.size()){
            ans.push_back(temp);
            return ;
        }
        for(int i=0;i<nums.size();i++){
           if(visited[i]==0){
            visited[i]=1;
            temp.push_back(nums[i]);
            permutation(nums,ans,temp,visited);
            visited[i]=0;
            temp.pop_back();

           }
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<bool>visited(nums.size(),0);
        permutation(nums,ans,temp,visited);

        return ans;
    }
};