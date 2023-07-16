class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        map<int,int>m;
        for(auto i : nums){
            m[i-k]++;
            m[i+k+1]--;
        }
        
        int res = 0,mx = 0;
        for(auto el : m){
            res += el.second;
            mx = max(mx,res);
        }
        return mx;
    }
};