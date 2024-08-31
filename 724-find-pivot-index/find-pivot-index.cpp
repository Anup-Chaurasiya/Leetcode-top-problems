class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=nums[0];
        int n=nums.size();
        vector<int>pre(n,0);
        for(int i=1;i<n;i++){
            sum +=nums[i];
            pre[i]=pre[i-1] + nums[i-1];
        }

        for(int i=0;i<n;i++){
            if(pre[i] == sum - nums[i]-pre[i])
            return i;
        }

        return -1;
    }
};