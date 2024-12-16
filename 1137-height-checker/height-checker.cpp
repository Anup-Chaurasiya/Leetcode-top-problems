class Solution {
public:
    int heightChecker(vector<int>& heights) {
        unordered_map<int,int>mpp;
        vector<int>ans;

       int minValue = INT_MAX; 
       int maxValue = INT_MIN; 
       for(auto i : heights){
           mpp[i]++;
           minValue = min(minValue,i);
           maxValue = max(maxValue,i);
       }
       
       int index = 0;
       for(int i = minValue;i<=maxValue;i++){
           if(mpp.find(i) != mpp.end()){
               int count = mpp[i];
               while(count--){
                   ans.push_back(i);
               }
           }
       }
       int count =0;

        for(int i=0;i<heights.size();i++){
            if(heights[i] != ans[i]){
                count++;
            }
        }
        return count ;
    }
};