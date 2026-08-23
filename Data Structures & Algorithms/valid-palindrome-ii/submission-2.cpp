class Solution {
   public:
    bool checkpalindrome(string s, int st, int end) {
        while (st < end) {
            if (s[st] != s[end]) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.length();
        int st = 0;
        int end = n-1;
        while(st < end){
            if(s[st] == s[end]){
                st++;
                end--;
            }
            else{
                return checkpalindrome(s, st+1 , end) ||
                checkpalindrome(s, st, end-1);
            }
        }
        return true;
    }
};