class Solution
{
public:
    string longestString(vector<string> &v)
    {
        sort(v.begin(),v.end(), [&](string a,string b){
           return a.length() != b.length() ? a.size() > b.size() : a < b;
        });
        int n = v.size();
        reverse(v.begin(),v.end());
        for(int i = n-1;i >= 0;i--){
            string w = v[i];
            int m = w.size();
            bool fl = true;
            string tmp = "";
            for(int i = 0;i<m-1;i++){
                if(!fl) break;
                tmp += w[i];
                int idx = 0;
                while(idx < n and v[idx] != tmp) idx++;
                if(idx >= n) fl = false;
            }
            if(fl) return w;
        }
        return "";
    }
};