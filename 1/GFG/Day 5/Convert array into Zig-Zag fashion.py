class Solution:
    # Program for zig-zag conversion of array
    def zigZag(self, arr, n):
        
        flag = True
        for i in range(n-1):
            if flag and arr[i] > arr[i+1]:
                tmp = arr[i]
                arr[i] = arr[i+1]
                arr[i+1] = tmp
            elif not(flag) and arr[i] < arr[i+1]:
                tmp = arr[i]
                arr[i] = arr[i+1]
                arr[i+1] = tmp
            flag = not(flag)