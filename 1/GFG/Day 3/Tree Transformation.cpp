//User function Template for C++

class Solution {
    public:
    int solve(int n, vector<int> p){
        // code here
        vector<int>a(n,0);
        for(int i = 1;i < n;i++){
            a[p[i]]++;
        }
        int res = 0;
        for (auto i : a){
            if(i > 0) res+=1;
        }
        if(a[0] < 2) res  -= 1;
        return max(0,res - 1);
        
    }
};