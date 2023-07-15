#include <bits/stdc++.h> 

int f(int idx,vector<int>&a,vector<int>&dp){
    if(idx == 0) return a[0];
    if(idx < 0) return 0;
    if(dp[idx] != -1) return dp[idx];
    int pick = a[idx] + f(idx-2,a,dp);
    int np = f(idx-1,a,dp);
    return dp[idx] = max(pick,np);
}
int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    vector<int>dp(n+10,-1);
    // memset(dp,-1,n+10);
    return f(n-1,nums,dp);

}