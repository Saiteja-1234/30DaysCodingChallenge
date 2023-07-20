vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int>ans;
    int  n = a.size();
    int mx = a[n-1];
    ans.push_back(mx);
    for(int i  = n-2;i >= 0;i--){
        if(a[i] > mx){
            
            ans.push_back(a[i]);
            
        }
        mx = max(mx,a[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
    
}