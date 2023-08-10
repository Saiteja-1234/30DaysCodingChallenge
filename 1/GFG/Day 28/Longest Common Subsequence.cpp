//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod = 1e9+7;
using namespace std;


class Solution
{
    public:
    int solve(string &a,string &b,int i,int j,vector<vector<int>> &dp)
    {
        if(i == a.length() or j == b.length())
        {
            return 0;
        }
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int ans = 0;
        if(a[i] == b[j])
        {
            ans = 1 + solve(a,b,i + 1,j + 1,dp);
        }
        else
        {
           ans = max(solve(a,b,i + 1,j,dp),solve(a,b,i,j + 1,dp));
        }
        return dp[i][j] = ans;
    }
    int lcs(int n, int m, string s1, string s2)
    {
        vector<vector<int>> dp(s1.length(),vector<int>(s2.length(),-1));
        return solve(s1,s2,0,0,dp);
    }
};


int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2; 
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}