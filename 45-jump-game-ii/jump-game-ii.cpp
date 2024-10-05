class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0;
        int maxIndex=0;
        int currIndex=0;

        for(int i=0;i<nums.size()-1;i++){
            maxIndex = max( maxIndex , i + nums[i]);

            if(i==currIndex){
                jump++;
                currIndex=maxIndex;
            } 
        }
        return jump;
    }
};