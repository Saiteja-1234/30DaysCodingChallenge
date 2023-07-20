class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size(),positve = 0, neg = 1;
        vector<int>ans(n,0);
        for(int i = 0;i < n;i++){
            if(nums[i] < 0) {ans[neg] = nums[i];neg +=2;}
            else{ans[positve] = nums[i];positve +=2;}
        } 
        return ans;
    }
};