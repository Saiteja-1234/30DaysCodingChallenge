class Solution {
	public:
		string FirstNonRepeating(string A){
		    vector<char>v;
		    unordered_map<char,int>mp;
		    string ans = "";
		    for (char ch : A) {
            if (mp.find(ch) == mp.end()) {
                v.push_back(ch);
                mp[ch] = 1;
            }
            else {
                int index = find(v.begin(), v.end(), ch) - v.begin();
                if (index < v.size()) v.erase(v.begin() + index);
            }
            ans += (v.empty() ? '#' : v.front());
        }
     
        return ans;
		    
	}
};