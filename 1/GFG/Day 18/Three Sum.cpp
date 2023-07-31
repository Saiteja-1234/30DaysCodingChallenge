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
