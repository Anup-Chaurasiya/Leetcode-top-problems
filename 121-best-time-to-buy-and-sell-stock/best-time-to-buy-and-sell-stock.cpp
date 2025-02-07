class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int index = 1 ;
        int profit = 0 ;
        int buy  = prices[0];

        while(index < prices.size()){
            if(prices[index]<buy){
                buy = prices[index];
            }else{
            profit  = max(profit,prices[index]-buy);
            }
            index++;
        }
        return profit;

    }
};