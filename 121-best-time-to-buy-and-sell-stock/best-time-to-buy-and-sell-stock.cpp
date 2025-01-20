class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*
            Buy Low
            Sell High
            ---------------
            2 pointers
            l = Buy
            r = Sell
            ---------------
            you can't just take the min and max numbers since
            time goes on one direction, you can't go back in time
            to sell. You buy THEN sell
            (Make a graph to get it)
        */


        int l=0, r=1;
        int max_profit = 0;
        while( r<prices.size()){
            if(prices[r] > prices[l]){
                max_profit = max(max_profit, prices[r]-prices[l]);
            }
            else if(prices[r] <= prices[l]){
                l = r; // shift l all way till the r, idc about all before the r pointer
            }
            r++;
        }
        return max_profit;
    }
};
