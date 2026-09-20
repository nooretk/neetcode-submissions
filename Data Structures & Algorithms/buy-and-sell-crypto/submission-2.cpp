class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 1) return 0;
        int l = 0, r = 1;
        int ans = 0;
        while (r < prices.size())
        {
            int profit = prices[r] - prices[l];
            ans = max(profit, ans);

            if (prices[r] < prices[l]) l = r;
            r++;
        }
        return ans;
    }
};
