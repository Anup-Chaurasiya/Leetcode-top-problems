class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        unordered_map<int,int>mpp;

       int minValue = INT_MAX; 
       int maxValue = INT_MIN; 
       for(auto i : nums){
           mpp[i]++;
           minValue = min(minValue,i);
           maxValue = max(maxValue,i);
        }
       int index = 0;
       for(int i = minValue;i<=maxValue;i++){
           if(mpp.find(i) != mpp.end()){
               int count = mpp[i];
               while(count--){
                   nums[index++] = i ;
               }
           }
       }

       int sum = 0 ;
       for(int i=0;i<nums.size();i=i+2){
            sum += nums[i]; 
        }

        return sum ;
    }
};