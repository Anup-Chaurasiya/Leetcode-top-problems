class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>result;
        int n=candies.size();
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(candies[i]>max){
                max=candies[i];
            }
        }
        for(int i=0;i<candies.size();i++){
            int sum = extraCandies + candies[i];
            if(sum>=max)
            result.push_back(true);
            else
            result.push_back(false);
        }

        return result;
    }
};