
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
  bool isValid(int x,int y,int r,int c){
      if(x >= 0 and x < r and y >= 0 and y < c)return true;
      return false;
  }
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        if(A[0][0] == 0) return -1;
        int dx[] = {0,0,-1,1};
        int dy[] = {-1,1,0,0};
        queue<pair<pair<int,int>,int>>q;
        vector<vector<bool>>vis(N,vector<bool>(M));
        q.push({{0,0},0});
        vis[0][0] = true;
        int cnt = 0;
        while(!q.empty()){
            auto f = q.front();
            int r = f.first.first,c = f.first.second,st = f.second;
            q.pop();
            if(r == X and c == Y)return st;
            for(int d = 0;d < 4;d++){
                int nr = r + dx[d];
                int nc = c + dy[d];
                if(isValid(nr,nc,N,M) and !vis[nr][nc] and A[nr][nc] == 1){
                    q.push({{nr,nc},st + 1});
                    vis[nr][nc] = true;
                }
            }
        }
        return -1;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends