#User function Template for python3

class Solution:
    #Function to find triplets with zero sum.    
    def findTriplets(self, arr, n):
        arr.sort() 
        for i in range(0, n-1):
            l = i + 1
            r = n - 1
            x = arr[i]
            while (l < r):        
                if (x + arr[l] + arr[r] == 0):
                    return True
                elif (x + arr[l] + arr[r] < 0):
                    l += 1
                else:
                    r -= 1
        return False
