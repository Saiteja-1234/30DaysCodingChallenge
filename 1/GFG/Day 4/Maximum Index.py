class Solution:

	def maxIndexDiff(self,arr,n):
		lm = [0] * n
		rm = [0] * n
		lm[0] = arr[0]
		for i in range(1,n):
		    lm[i]  = min(lm[i-1],arr[i])
	    
	    
	    rm[n-1] = arr[n-1]
	    for i in range(n-2,-1,-1):
		    rm[i]  = max(rm[i+1],arr[i])
	    
	    i,j = 0,0
	    mxValue = 0
	    
	    
	    while(i < n and j < n):
	        if(lm[i] <= rm[j]):
	            mxValue = max(mxValue,j - i)
	            j += 1
	        else :
	            i +=1
        return mxValue
