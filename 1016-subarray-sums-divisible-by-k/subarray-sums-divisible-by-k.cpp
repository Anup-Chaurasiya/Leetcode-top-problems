class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int total=0;
        int pre_sum=0,rem;
        m[0]=1;

        for(int i=0;i<nums.size();i++){
            pre_sum +=nums[i];
            rem = pre_sum % k;

            if(rem<0) 
                rem=rem + k;

            if(m.count(rem)){
                total +=m[rem];
                m[rem]++;
            }
            else {
                m[rem]=1;
            }

        }
        return total;
    }
};