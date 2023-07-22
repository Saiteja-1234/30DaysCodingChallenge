class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int r = 0,l = 0;
        for (int i = n - 1; i >= 0; i--) {
            res[i] = r;
            r += nums[i];
        }
        for (int i = 0; i < n; i++) {
            res[i] = abs(res[i] - l);
            l += nums[i];
        }

        return res;
    }
};