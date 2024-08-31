class Solution {
public:
    int longestSubarray(vector<int>& nums) {
          int i=0;
        int j=-1;
        int result=0;
        int count=0;
        while(i<nums.size()){
            // acquare
            if(nums[i]==1){
                i++;
            }
            else{
                count++;
                i++;
            }
            // release when invalid
            while(count>1 && j<i){
                j++;
                if(nums[j]==0){
                    count--;
                }
            }
            // consider
            int ans=i-1-j;
            result=max(ans,result);
        }
        return result-1;
    }
};