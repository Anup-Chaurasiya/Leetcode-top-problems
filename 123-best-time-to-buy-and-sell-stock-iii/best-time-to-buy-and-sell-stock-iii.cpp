class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int buy1 = INT_MAX, buy2 = INT_MAX;
        int profit1 = 0, profit2 = 0;
        
        for (int price : prices) {
            buy1 = min(buy1, price);               // Best price for 1st buy
            profit1 = max(profit1, price - buy1);  // Max profit after 1st sell
            buy2 = min(buy2, price - profit1);     // Best price for 2nd buy (adjusted)
            profit2 = max(profit2, price - buy2);  // Max profit after 2nd sell
        }
        return profit2;
    }
};