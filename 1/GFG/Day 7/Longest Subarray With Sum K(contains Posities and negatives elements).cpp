int getLongestSubarray(vector<int>& a, int k){
    // Write your code here
    unordered_map<long long,int> mp;
    long long sum = 0;
    int n = a.size(),mx = 0;
    for(int i = 0;i < n;i++){
        sum += a[i];
        if(sum == k){
            mx = max(mx,i+1);
        }
        long long rem = sum - k;
        if(mp.find(rem) != mp.end()){
            mx = max(mx,i - mp[rem]);
        }
        if(mp.find(sum) == mp.end()) mp[sum] = i;
    }
    return mx;
}