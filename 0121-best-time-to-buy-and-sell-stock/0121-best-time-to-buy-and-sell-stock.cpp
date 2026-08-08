class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minIdx=10000, maxProfit=0;
        for(int i=0;i<prices.size();i++){
            minIdx=min(prices[i], minIdx);
            int currProfit=prices[i]-minIdx;
            maxProfit=max(currProfit, maxProfit);
        }
        return maxProfit;
    }
};