class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int bestBuy = prices[0];

        for(int i=1;i<n;i++){
            if(prices[i] > prices[i-1]){
                maxProfit += (prices[i] - prices[i-1]);
            }
            bestBuy = prices[i];
        }
        return maxProfit;
    }
};