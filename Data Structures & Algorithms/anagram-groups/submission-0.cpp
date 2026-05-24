class Solution {
public:
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
    unordered_map<string, vector<string>> mp;

    for (int i = 0; i < strs.size(); i++) {
        string temp = strs[i];
        
        // sort the string to create key
        sort(temp.begin(), temp.end());
        
        // store original string in map
        mp[temp].push_back(strs[i]);
    }

    vector<vector<string>> ans;

    // collect all grouped anagrams
    for (auto it : mp) {
        ans.push_back(it.second);
    }

    return ans;
}
};
