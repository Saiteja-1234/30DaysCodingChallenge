class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        int idx = 0;
        for (int i = 1; i < n; i++) {
            if (v[idx][1] >= v[i][0]) {
                v[idx][1] = max(v[idx][1], v[i][1]);
            }
            else {
                idx++;
                v[idx] = v[i];
                
            }
        }
        v.erase(v.begin()+idx+1,v.end());
        return v;
    }
};