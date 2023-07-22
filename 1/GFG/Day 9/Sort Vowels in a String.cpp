class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U' or ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') return true;
        return false;
    }
    string sortVowels(string s) {
        string t = "",v = "";
        for(int i = 0;i<s.length();i++){
            if(isVowel(s[i])) v+=s[i];
        }
        sort(v.begin(),v.end());
        int j = 0;
        for(int i = 0;i < s.length();i++){
            if(isVowel(s[i])){t += v[j];j++;}
            else t +=s[i];
        }
        return t;
        
        
    }
};