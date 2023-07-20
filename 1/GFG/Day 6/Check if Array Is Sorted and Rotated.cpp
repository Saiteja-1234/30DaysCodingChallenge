class Solution {
public:
    bool check(vector<int>& a) {
        int cnt = 0, n = a.size();
        for (int i = 0;i < a.size();i++){
            if(a[i] > a[(i+1)%n])cnt++;
        }
        if(cnt <= 1)return true;
        return false;
    }
};