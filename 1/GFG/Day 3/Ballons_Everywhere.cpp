//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        map<char,int>m;
        for(auto i : s) m[i]++;
        return min(m['a'],min(m['b'],min(int(m['l']/2),min(int(m['o']/2),m['n']))));
    }
};