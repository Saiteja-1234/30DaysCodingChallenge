class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        int x;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]>nums.size()/2)
                x=nums[i];
        }
        return x;
        
    }
};

// ----------------OPTIMAL USING Moore's Voting Algo

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore's Voting Algorithm
        int cnt = 0,el;
        int n = nums.size();
        for(auto i : nums){
            if(cnt == 0){
                cnt = 1;
                el = i;
            }
            else if(i == el) cnt++;
            else cnt--;
        }
        //checking the el is repeated greater than n/2 times
        int cnt1 = 0;
        for(int i = 0;i < n;i++){
            if(nums[i] == el)cnt1++;
            if(cnt1 > int(n/2)) return el;
        }
        return -1;
    }    
};