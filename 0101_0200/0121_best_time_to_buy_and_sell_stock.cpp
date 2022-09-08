class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if (prices.empty()) {
            return 0;
        }
        int min = prices[0];
        int max = std::numeric_limits<int>::min();
        
        for (int i = 0; i < prices.size(); i++){
            int profit = prices[i] - min;
            
            if (profit > max) {
                max = profit;
            }
            if (prices[i] < min) {
                min = prices[i];   
            }
        }
        return max;
    }
};