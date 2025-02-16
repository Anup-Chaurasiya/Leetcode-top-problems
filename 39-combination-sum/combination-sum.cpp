class Solution {
public:
    set<vector<int>>s;
    void combination(int id, vector<int>&arr, int target, vector<int>comb, vector<vector<int>> & ans){
        
        if(id==arr.size() || target < 0){
            return ;
        }
        if(target==0){
            if(s.find(comb)== s.end())
            ans.push_back(comb);
            s.insert(comb);
            return; 
        }

        comb.push_back(arr[id]);
        combination(id+1,arr,target-arr[id],comb,ans); // single inclusion
        combination(id,arr,target-arr[id],comb,ans);   // multiple inclusion
        comb.pop_back();   // backtracking 
        combination(id+1,arr,target,comb,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int> comb;

        combination(0,candidates,target,comb,ans);
        return ans;
    }
};