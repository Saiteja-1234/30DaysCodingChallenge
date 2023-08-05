class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int ans = 100 - purchaseAmount;
        if(ans % 10 > 5) return (ans+10)/10*10;
        return ans/10 * 10;
    }
};