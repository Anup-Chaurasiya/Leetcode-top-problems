class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int s=0,e=0;
        long long product;
        long long count=0;
        long long sum=0;
        while(e<nums.size()){
            sum  +=nums[e];
            product = sum * (e-s+1);

            while(product >= k && s<=e){
                sum -=nums[s];
                s++;
                product = sum * (e-s+1);
            }
            count += (e-s+1);
            e++;

        }
        return count ;
    }
};