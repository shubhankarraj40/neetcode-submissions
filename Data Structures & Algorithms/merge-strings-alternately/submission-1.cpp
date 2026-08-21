class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        vector<char> ans;
        int n = word1.size();
        int m = word2.size();
        int st1 = 0, st2 = 0;
        while(st1 < n && st2 < m){
            ans.push_back(word1[st1]);
            ans.push_back(word2[st2]);
            st1++;
            st2++;
        }
        while(st1 < n){
            ans.push_back(word1[st1]);
            st1++;
        }
        while(st2 < m){
            ans.push_back(word2[st2]);
            st2++;      
        }

        return string(ans.begin(), ans.end());
    }
};