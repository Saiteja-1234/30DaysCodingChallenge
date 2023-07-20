class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int d = k%n;

        //Rotating right by k steps
        reverse(nums.end()-d,nums.end());
        reverse(nums.begin(),nums.end()-d);
        reverse(nums.begin(),nums.end());


        //Rotating Left by k steps
        // reverse(nums.begin(),nums.begin() + d);
        // reverse(nums.begin()+d,nums.end());
        // reverse(nums.begin(),nums.end());
    }
};