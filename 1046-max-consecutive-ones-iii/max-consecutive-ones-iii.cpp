class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int j=-1;
        int coziw=0;
        int result=0;
        while(i<nums.size()){
            // acquare
            if(nums[i]==0){
                coziw++;
                i++;
            }
            else{
                i++;
            }
            // release when invalid
            while(coziw>k){
                j++;
                if(nums[j]==0){
                    coziw--;
                }
            }
            // consider
            int ans=i-1-j;
            result=max(ans,result);
        }
        return result;
    }
};