
class Solution:
    def setBits(self, N):
        # code here
        c = 0
        for i in range(32):
            if(N & (1<<i)):c+=1
        return c