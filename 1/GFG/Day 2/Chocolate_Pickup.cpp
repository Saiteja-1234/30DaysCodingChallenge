#include <bits/stdc++.h> 


int f(int i,int j1,int j2,int r,int c,vector<vector<int>>&grid,vector<vector<vector<int>>>&dp){
    if(j1 >=c or j1 < 0 or j2 >=c or j2 < 0) return 0;
    if(i == r-1){
        if(j1 == j2) return grid[i][j1];
        else return grid[i][j1]+grid[i][j2];
    }
    if(dp[i][j1][j2] != -1) return dp[i][j1][j2];

    int mx = -1e8;
    for(int dj1 = -1 ;dj1<=1;dj1++){
        for(int dj2 = -1;dj2 <= 1;dj2++){
            int ans = 0;
            if(j1 == j2){
                ans = grid[i][j1];
            }
            else ans = grid[i][j2]+grid[i][j1];
            ans += f(i+1,j1+dj1,j2+dj2,r,c,grid,dp);
            mx = max(mx,ans);
        }
        
    }
    return dp[i][j1][j2] = mx;
}
int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    vector<vector<vector<int>>>dp(r,vector<vector<int>>(c,vector<int>(c,-1)));
    return f(0,0,c-1,r,c,grid,dp);
}