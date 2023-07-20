class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0,mx = 0, n  = nums.size();
        for(int i = 0;i < n;i++){
            if(nums[i] == 1){
                ans++;
            }
            else{
                mx = max(ans,mx);
                ans = 0;
            }
        }
        mx = max(mx,ans);
        return mx;
    }
};