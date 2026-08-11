class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n  = prices.size();
        int max_profit = 0 , bestbuy = prices[0];
        for(int i = 0; i < n; i++){
            if(prices[i] > bestbuy){
                max_profit = max(max_profit, prices[i] - bestbuy);
            }
              bestbuy = min(bestbuy , prices[i]);
        }
      return max_profit;
    }
};
