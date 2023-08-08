// APPROACH 1 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int lft = m - 1;
        int rght = 0;
        while(lft >= 0 and rght < n){
            if(nums1[lft] > nums2[rght]){swap(nums1[lft],nums2[rght]);lft--;rght++;}
            else break;
        }
        sort(nums1.begin(),nums1.begin()+m);
        sort(nums2.begin(),nums2.end());
        int idx = 0;
        for(int i = m; i < n + m;i++){
            nums1[i] = nums2[idx++];
        }
    }
};



// APPROACH 2 
class Solution {
private:
    void swapIf(vector<int>& nums1,vector<int>& nums2,int idx1,int idx2){
        if(nums1[idx1] > nums2[idx2]) swap(nums1[idx1],nums2[idx2]);
    }
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // APPROACH 2 USING gap METHOD which is used in SHELL SORT
        int len = m + n;
        int gap = (len / 2) + (len % 2);
        while(gap > 0){
            int lft = 0,right = gap + lft;
            while(right < len){
                // arr1 and arr2
                if(lft < m and right >= m){
                    swapIf(nums1,nums2,lft,right - m);
                } 
                // arr2 and arr2
                else if(lft >= m){
                    swapIf(nums2,nums2,lft - m,right - m);
                }
                // arr1 and arr1
                else{
                    swapIf(nums1,nums1,lft,right);
                }
                lft++,right++;
            }
           
            if(gap == 1)break;
            gap = gap / 2 + gap % 2;
        }
        int idx = 0;
        for(int i = m; i < n + m;i++){
            nums1[i] = nums2[idx++];
        }
    }
};