def helper(n,n1,S,s1,dp):
    if(n == 0 or n1 == 0):return 0
    if(dp[n][n1] != -1):return dp[n][n1]
    if(S[n-1] == s1[n1-1]):
        dp[n][n1] = 1 + helper(n-1,n1-1,S,s1,dp);
    else:
        dp[n][n1] = max(helper(n,n1-1,S,s1,dp),helper(n-1,n1,S,s1,dp))
    return dp[n][n1]
class Solution:
    
    def longestPalinSubseq(self, S):
        # code here
        
        n = len(S)
        dp = [[-1 for i in range(n+1)] for j in range(n+1)]
        s1 = S[::-1]
        return helper(n,n,S,s1,dp)
        
