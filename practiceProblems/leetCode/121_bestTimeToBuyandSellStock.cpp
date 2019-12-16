class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
            return 0;
        int minIndex = prices[0];
        int maxSum  = 0;
        for(int i=0;i<prices.size();i++) {
            maxSum = max(prices[i] - minIndex, maxSum );
            minIndex = min(minIndex,prices[i]);
        
        }
        return maxSum;
    }
};
