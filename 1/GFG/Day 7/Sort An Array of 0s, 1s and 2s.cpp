class Solution {
public:
    void sortColors(vector<int>& nums) {
        // DUTCH NATIONAL FLAG Algorithm - says that take 3 ptrs
        int n = nums.size();
        int low = 0, mid = 0, hgh = n-1;
        // The values from [0 ..... low - 1] will be zeroes ----> extreme left
        // [low ............. high] ==== 1 
        // [hign ................. n-1 ] === 2 ---->extreme right
        while(mid<=hgh){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1)mid++;
            else{
                swap(nums[mid],nums[hgh]);
                hgh--;
            }
        }
    }
};