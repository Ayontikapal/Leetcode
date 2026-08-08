class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=10000, maxProfit=0;
        for(int i=0;i<prices.size();i++){
            minPrice=min(prices[i], minPrice);
            int currProfit=prices[i]-minPrice;
            maxProfit=max(currProfit, maxProfit);
        }
        return maxProfit;
    }
};