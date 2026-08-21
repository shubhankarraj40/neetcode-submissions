class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int st1 = 0;
        int st2 = 0;
        while(st1 < m && st2 < n){
            if(nums1[st1] < nums2[st2]){
                ans.push_back(nums1[st1]);
                st1++;
            }
            else{
                ans.push_back(nums2[st2]);
                st2++;
            }
        }
        while(st1 < m){
             ans.push_back(nums1[st1]);
             st1++;
        }
        while(st2 < n){
            ans.push_back(nums2[st2]);
            st2++;

        }
        for(int i = 0; i < n+m; i++){
            nums1[i] = ans[i];
        }
    }
};