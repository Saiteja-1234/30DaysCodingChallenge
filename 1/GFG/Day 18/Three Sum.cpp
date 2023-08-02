#include<bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &nums)
{
    set<vector<int>>st;
    for(int i = 0;i < n;i++){
        set<int>hashSet;
        for(int j = i + 1;j < n;j++){
            int third = -(nums[i] + nums[j]);
            if(hashSet.find(third) != hashSet.end()){
                vector<int>tmp = {nums[i],nums[j],third};
                sort(tmp.begin(),tmp.end());
                st.insert(tmp);
            }
            hashSet.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}


// ---------------------------OPTIMAL APPROACH(2 POINTER)-------------------------------------------------------------
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n;i++){
            if(i > 0 and nums[i] == nums[i-1]) continue;
            int j = i + 1;
            int k  = n - 1;
            while(j < k){
                long long sum  =  nums[i] + nums[j] + nums[k];
                if(sum < 0){
                    j++;
                }
                else if(sum > 0) k--;
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j < k and nums[j] == nums[j-1])j++;
                    while(j < k and nums[k] == nums[k+1])k--;
                }
            }
        }
        return ans;
        
    }
};