#include <bits/stdc++.h> 

int f(int i,vector<int>&a,vector<int>&dp){
    if(i <= 0) return 0;
    if(dp[i] != -1) return dp[i];
    // return dp[i] = min(f(i-1,a,dp)+abs(a[i]-a[i-1]),f(i-2,a,dp)+abs(a[i]-a[i-2]));
    int lft = f(i-1,a,dp)+abs(a[i]-a[i-1]);;
    int rght = INT_MAX;
    if(i > 1) rght = f(i-2,a,dp)+abs(a[i]-a[i-2]);
    return dp[i] = min(lft,rght);
}
int frogJump(int n, vector<int> &heights)
{
    vector<int>dp(n+1,-1);
    return f(n-1,heights,dp);
}