class Solution:
    def maxScore(self, nums: List[int], x: int) -> int:
        m = [0,0]
        res = 0
        for i in range(len(nums)-1,-1,-1):
            p=nums[i]%2
            res=max(0,m[p],m[1-p] - x)+nums[i]
            m[p]=max(m[p],res)
        return res
        