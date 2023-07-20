class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx = -1, n = nums.size();
        
        // find the break point in which the next permutation will occur
        for(int i = n-2;i >= 0; i--){
            if(nums[i] < nums[i+1]){
                idx = i;
                break;
            }
        }
        // If there is no idx then the array is descending order just reverse to get the permutation
        if(idx == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        // check the smallest elementafter the value of idx
        for(int i = n-1;i > idx;i--){
            if(nums[i] > nums[idx]) {swap(nums[i],nums[idx]);break;}
        }
        reverse(nums.begin()+idx+1,nums.end());
    }
};