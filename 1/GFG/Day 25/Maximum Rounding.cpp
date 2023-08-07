#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
#define fo(n) for(int i=0;i<n;i++)
#define fon(nu,n) for(int i=nu;i<n;i++)
#define mp map<int,int>
#define val 1000000007
#define int long long
#define vi vector<int>
#define stk stack<int>
#define stk1(n) stack<n>
#define qu queue<int>
#define qu1(n) queue<n>
#define dq deque<int>
#define dq1(n) deque<n>
#define pf(n) push_front(n)
#define pb(n) push_back(n)
#define pof pop_front()
#define pob pop_back()
#define maxheap1(n) priority_queue<n>
#define maxheap priority_queue<int>
#define minheap1(n) priority_queue<n,vector<n>,greater<n>>
#define fr front()
#define bk back()
#define print(val) cout<<val;
#define vid(n) vector<n>
#define vv(n) vector<vector<n>>
#define fo1(x,n) for(int x=0;x<n;x++)
#define ffo(x,nu,n) for(int x=nu;x<n;x++)


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int n;
    test{
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        int k = 0,start = 0;
        s += '0';
        for(int i = 0;i < s.length();i++){
            if(s[i] >= '5'){
                s[i+1]++;
                for(int j = i;j >= k;j--)s[j] = '0';
                k = i;
            }
        }
        reverse(s.begin(), s.end());
        if(s[0] == '0')start++;
        while(start < s.length()){
            cout<<s[start];
            start++;
        }
        cout<<'\n';


    }
    return 0;
}