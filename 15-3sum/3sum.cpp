class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int t = -(nums[i]);
            int s = i+1 ;
            int e = n-1;
            while(s<e){
                if(t==nums[s]+nums[e]){
                    ans.push_back({nums[i],nums[s],nums[e]});
                    while(s<e && nums[s] == nums[s+1]) s++;
                    while(e>s && nums[e] == nums[e-1]) e--;
                    s++;
                    e--;
                }
                else if(nums[s]+nums[e]<t){
                    s++;
                }
                else{
                    e--;
                }

            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};