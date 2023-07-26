// ------------------------------Better Approach----------------------------------

#include<bits/stdc++.h>
vector<int> majorityElement(vector<int> &nums) {
	// Write your code here
	int n = nums.size();
	vector<int>ls;
	map<int,int>mp;
	int s = n/3+1;
	for(auto i : nums){
		mp[i]++;
		if(mp[i] == s)ls.push_back(i);
		if(ls.size() == 2) break;
	}
	sort(ls.begin(),ls.end());
	return ls;
}


// ------------------------------------Optimal Apporoach-----------------------------------
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>ls;
        int cnt1 = 0,cnt2 = 0,el1 = INT_MIN,el2 = INT_MIN;
        int s = n/3+1;
        for(int i = 0;i < n;i++){
            if(cnt1 == 0 and el2 != nums[i]){cnt1 = 1;el1 = nums[i];}
            else if(cnt2 == 0 and el1 != nums[i]){cnt2 = 1;el2 = nums[i];}
            else if(el1 == nums[i]) cnt1++;
            else if(el2 == nums[i]) cnt2++;
            else{cnt1--;cnt2--;}
        }
        cnt1 = 0;cnt2 = 0;
        for(int i = 0;i < n;i++){
            if(el1 == nums[i]) cnt1++;
            if(el2 == nums[i]) cnt2++;
        }
        if(cnt1 >= s)ls.push_back(el1);
        if(cnt2 >= s)ls.push_back(el2);
        sort(ls.begin(),ls.end());
        return ls;
    }
};