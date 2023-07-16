class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sq  = 0;
        int i = 1, n = nums.size();
        for(auto j  : nums){
            if(n%i == 0)sq+=(j*j);
            i++;
        }
        return sq;
        
    }
};