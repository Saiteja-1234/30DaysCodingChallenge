class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        int fl = 0;
        int n = nums.size();
        if(n == 1) return true;
        if(n <= 2) return true;
        if(nums[0] + nums[1] >= m) return true;
        if(nums[n-1] + nums[n-2] >= m) return true;
        int sum = 0;
        for(int i = 1; i < n-1; i++) {
            if(nums[i] + nums[i+1] >= m) return true;
        }
        return false;
    }
};