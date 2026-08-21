class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int sl = 0;
        for(int fs = 1; fs < n; fs++){
            if(nums[sl] != nums[fs]){
                sl++;
                nums[sl] = nums[fs];
            }
        }
        return sl + 1;
    }
};