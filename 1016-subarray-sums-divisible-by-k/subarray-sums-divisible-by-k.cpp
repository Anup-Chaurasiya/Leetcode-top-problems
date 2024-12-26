class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int sum = 0 ;
        int total = 0 ;
        int rem ;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            rem = sum%k;
            if(rem<0){
                rem  = rem + k ;
            }
            if(mpp.count(rem)){
                total  += mpp[rem];
                mpp[rem]++;
            }
            else{
                mpp[rem] = 1;
            }
        }
        return total ;
    }
};