#User function Template for python3

class Solution:
    def LongestRepeatingSubsequence(self, str):
        n = len(str)
        l = [[0 for i in range(n+1)] for i in range(n+1)]
        for i in range(1,n+1):
            for j in range(1,n+1):
                if(str[i-1] == str[j-1] and i != j):
                    l[i][j] = 1 + l[i-1][j-1]
                else:
                    l[i][j] = max(l[i][j-1],l[i-1][j])
        return l[n][n]
