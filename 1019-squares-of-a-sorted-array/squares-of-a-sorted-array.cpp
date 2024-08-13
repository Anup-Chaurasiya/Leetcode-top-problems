class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        vector<int>res(nums.size());
        int k=e,i=0;
        while(s<=e){
            if(abs(nums[e])>abs(nums[s])){
                res[k]=nums[e]*nums[e];
                e--;
                k--;
            }
            else{
                res[k]=nums[s] * nums[s];
                s++;
                k--;
            }

        }
        return res;
    }
};