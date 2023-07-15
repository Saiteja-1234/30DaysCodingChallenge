#include <bits/stdc++.h> 
int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
	vector<int> front(n),cur(n);
	for(int j=0;j<n;j++){
		front[j] = triangle[n-1][j];
	}
	for(int i = n-2;i>=0;i--){
		for(int j = i;j>=0;j--){
			cur[j] = min(triangle[i][j]+front[j],triangle[i][j]+front[j+1]);
		}
		front = cur;
	}
	return front[0];