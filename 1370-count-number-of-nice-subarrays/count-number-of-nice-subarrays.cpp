class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
         unordered_map<int,int>mp;
        int sum=0;
        int total=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum +=(nums[i]%2);
            if(mp.count(sum-k)){
                total +=mp[sum-k];
                mp[sum]++;
            }else{
                mp[sum] +=1;
            }
        }
        return total;
    }
};