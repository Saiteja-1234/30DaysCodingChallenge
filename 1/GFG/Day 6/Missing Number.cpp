class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x1 = 0,x2 = 0,n = nums.size();
        for(int i = 0;i < n;i++){
            x1 ^= nums[i];
            x2 ^= i;
        }
        return (x1 ^ n) ^ x2;
        // do by using sum of n numbers formula
    }
};