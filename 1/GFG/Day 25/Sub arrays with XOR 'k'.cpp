#include<bits/stdc++.h>
int subarraysWithSumK(vector < int >& A, int B) {
     unordered_map<int,int>m;
    m[0] = 1;
    int xr = 0,cnt = 0;
    for(auto i : A){
        xr ^= i;
        int x = xr ^ B;
        if(m.find(x) != m.end()) cnt += m[x];
        m[xr]++;
    }
    return cnt;
}