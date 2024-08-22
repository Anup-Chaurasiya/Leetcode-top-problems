class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        int size=nums.size()-k;
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.begin()+size,nums.end());
        reverse(nums.begin(),nums.end());
       

    }
};