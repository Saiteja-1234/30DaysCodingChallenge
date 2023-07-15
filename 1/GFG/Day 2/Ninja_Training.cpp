#include<bits/stdc++.h>

int f(int day,int last,vector<vector<int>>&a,vector<vector<int>>&dp){
    if(day == 0){
        int mx = 0;
        for(int i = 0;i<=2;i++){
            if(i != last){
                
                mx= max(mx,a[0][i]);
            }
        }
        return mx;
    }
    if(dp[day][last] != -1) return dp[day][last];
    int mx = 0;
    for(int i = 0;i<=2;i++){
      if (i != last) {
        int pt = a[day][i] + f(day - 1, i, a, dp);
        mx = max(mx, pt);
      }
    }
    return dp[day][last] = mx;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // int n = points[0].size();
    vector<vector<int>>dp(n,vector<int>(4,-1));
    return f(n-1,3,points,dp);
}