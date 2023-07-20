class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0,mn = prices[0], n = prices.size();
        for(int i = 1;i < n;i++){
            mx = max(mx,prices[i] - mn);
            mn = min(mn,prices[i]);
        }
        return mx;

    }
};