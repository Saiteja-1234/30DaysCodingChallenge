class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0,v = nums[n-1];
        for(int i = n-2;i >= 0 ;i--){
            if(nums[i] <= v){
                v += nums[i];
                if(v > ans) ans = v;
            }
            else{
                if(v > ans)ans = v;
                v = nums[i];
            }
        }
        return v;
    }
};