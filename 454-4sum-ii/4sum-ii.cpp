class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>mpp;
        int n = nums1.size(); 
        int count = 0 ; 
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sum  = nums1[i] + nums2[j];
                if(mpp.count(sum)){
                    mpp[sum]++;
                }
                else{
                    mpp[sum] = 1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sum  = nums3[i] + nums4[j];
                sum = - sum ;
                if(mpp.count(sum)){
                    count += mpp[sum];
                }
            }
        }
        return count;
    }
};