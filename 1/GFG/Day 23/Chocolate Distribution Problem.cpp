//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        long long mn = INT_MAX;
        int i = 0;
        for(i = 0 ;i <= n - m;i++){
            mn = min(a[m+i-1] - a[i],mn);
        }
        // if(mn == INT_MAX)mn = min(mn,a[m-1]-a[0]);
        /*
        5 5 5 5 6 8 9 9 9 10 11 11
        
        5 7 11 12 13 13
        mn=mx
        */
        return mn;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends 6990. Account Balance After Rounded Purchase
