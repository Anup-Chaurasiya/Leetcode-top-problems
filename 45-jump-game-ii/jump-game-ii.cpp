class Solution {
public:
    int jump(vector<int>& nums) {
        int steps=0;
        int maxIndex=0;
        int current =0;
        for(int i=0;i<nums.size()-1;i++){
            maxIndex= max(maxIndex, i+nums[i]);

            if(i == current){
                steps++;
                current = maxIndex;
            }
        }

        return steps;
    }
};