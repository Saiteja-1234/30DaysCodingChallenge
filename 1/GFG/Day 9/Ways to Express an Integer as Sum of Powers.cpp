class Solution {
public:
    int mod = int(1e9+7);
    int pow(int a,int b){
        if(b == 0 or a == 1) return 1;
        if(b == 1) return a;
        int hf = pow(a,b/2);
        int sq = (hf * hf)%1000000007;
        if(b & 1) return (sq * a)%1000000007;
        return sq;
    }
    int countWaysUtil(int idx,int n,int x,vector<vector<int>>&dp)
    {
        if (idx < 0)
            return 0;
        if (idx == 0)
            return 1;
        if(pow(n,x) > idx) return 0;
        if(dp[idx][n] != -1) return dp[idx][n];
        int val = pow(n,x);
        int nt = countWaysUtil(idx-val,n + 1,x,dp);
        int tk = countWaysUtil(idx,n + 1,x,dp);
        return dp[idx][n] = (nt % mod + tk % mod) % mod;
    }
    int numberOfWays(int n, int x) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return countWaysUtil(n,1,x,dp);
    }
};