#include<bits/stdc++.h>

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    // //Better Solution
    // unordered_map<long long,int> mp;
    // long long sum = 0;
    // int n = a.size(),mx = 0;
    // for(int i = 0;i < n;i++){
    //     sum += a[i];
    //     if(sum == k){
    //         mx = max(mx,i+1);
    //     }
    //     long long rem = sum - k;
    //     if(mp.find(rem) != mp.end()){
    //         mx = max(mx,i - mp[rem]);
    //     }
    //     if(mp.find(sum) == mp.end()) mp[sum] = i;
    // }
    // return mx;



    // Optimal Solution is Sliding Window
    int n = a.size(),mx = 0;
    int st = 0, en = 0;
    long long sum = a[0];
    while(en < n){
        while(st <= en and sum > k){
            sum -= a[st++];
        }
        if(sum == k)  mx = max(mx,en - st + 1);
        en++;
        if(en < n)sum += a[en];
    }
    return mx;
}