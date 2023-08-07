class Solution {
public:
    string finalString(string s) {
        string st = "";
        for(auto i : s){
            if(i == 'i'){
                reverse(st.begin(),st.end());
            }
            else st += i;
        }
        return st;
    }
};