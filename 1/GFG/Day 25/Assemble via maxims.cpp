#include<bits/stdc++.h>
using namespace std;
#define int long long
#define test int t;cin>>t;while(t--)
#define fo(n) for(int i=0;i<n;i++)
#define fon(nu,n) for(int i=nu;i<n;i++)
#define mp map<int,int>
#define val 1000000007

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
    int n;
    
    test{
        cin>>n;
        mp m;
        int m2 = n * (n - 1)/2;
        vi a(m2),b;
        for(int i = 0;i < m2;i++){
            cin >> a[i];
            m[a[i]]++;
        }
        int m1 = n - 1,l, k ;
        for(auto i : m){
            if(m1 == i.second){b.pb(i.first);m1--;}
            else{
                l = m1;
                k = 0;
                while(l > 0 and i.second != k){
                    k += l;
                    b.pb(i.first);
                    l--;
                }
                m1 = l;
            }
        }
        for(auto i : b)cout<<i<<' ';
        l = b.size();
        while(l < n){
            cout<<1000000000<<' ';l++;
        }
        cout<<'\n';

    }
    return 0;
}