class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        int mx = INT_MIN;
        for(auto i : nums){
            prod *= i;
            mx = max(mx,prod);
            if(prod == 0) prod = 1;
        }
        prod = 1;
        for(int i = nums.size()-1;i >= 0;i--){
            prod *= nums[i];
            mx = max(mx,prod);
            if(!prod) prod = 1;

        }
        return mx;
    }
};