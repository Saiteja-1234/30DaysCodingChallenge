#include <bits/stdc++.h> 
int f(int r,int c,vector<vector<int>>&dp){
	if(r== 0 and c == 0) return 1;
	if(r < 0 or c < 0) return 0;
	if(dp[r][c] != -1) return dp[r][c];
	int up = f(r-1,c,dp);
	int left = f(r,c-1,dp);
	return dp[r][c] = up + left;  
}
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
	return f(m-1,n-1,dp);
}