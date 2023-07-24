// -------------------------------BETTER APPROACH ---------------------------------------

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        sort(nums.begin(),nums.end());
        int curS = 0,ln = 1,ls = INT_MIN;
        for(int i = 0;i < n;i++){
            if(nums[i] - 1 == ls){
                curS += 1;
                ls = nums[i];
            }
            else if(nums[i] != ls){
                curS = 1;
                ls = nums[i];
            }
            ln = max(ln,curS);
        }
        return ln;
    }
};

// OPTIMAL SOLUTION USING UNORDERED SET
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        unordered_set<int>st;
        int longest = 1;
        for(auto i : nums)st.insert(i);
        for(auto it : st){
            if(st.find(it - 1) == st.end()){
                int cnt = 1;
                int x = it;
                while(st.find(x + 1) != st.end()){
                    x += 1;
                    cnt +=1;
                }
                longest = max(longest,cnt);
            }
        }
        return longest;

    }
};