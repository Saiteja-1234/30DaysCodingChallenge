class Solution:
    def subArraySum(self,arr, n, s):
        l = []
        currentSum = arr[0]
        start = 0
        i = 1
        while i <= n:
            while currentSum > s and start < i-1:
     
                currentSum = currentSum - arr[start]
                start += 1
            if currentSum == s:
                l.append(start+1)
                l.append(i)
                return l
            if i < n:
                currentSum = currentSum + arr[i]
            i += 1
     
        l.append(-1)
        return l
     