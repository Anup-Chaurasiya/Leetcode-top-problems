class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0], maxi=0,profit;
        for(int i=0;i<prices.size()-1;i++){
            if(min>prices[i+1]){
                min=prices[i+1]; 
            }
            else{                 
             profit=prices[i+1]-min;
             maxi=max(maxi,profit);
            }
        }
        return maxi;
    }
};