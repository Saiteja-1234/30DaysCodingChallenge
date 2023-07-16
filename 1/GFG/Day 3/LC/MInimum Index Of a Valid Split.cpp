int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>m;
        int freq = 0;
        int val = 0;
        for(int i = 0;i < n;i++){
            m[nums[i]]++;
            if(m[nums[i]] > freq){
                freq = m[nums[i]];
                val = nums[i];
            }
        }
        if(freq * 2 <= n) return -1;
        int res = 0;
        for(int i = 0;i < n - 1;i++){
            if(nums[i] == val)res++;
            int d = freq - res;
            if(res * 2 > i + 1 and d * 2 > n - i - 1) return i;
        }
        return -1;
    }