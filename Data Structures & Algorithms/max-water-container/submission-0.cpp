class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater = 0;
        int h = heights.size();
        for(int i = 0; i < h; i++){
            for(int j = i+1; j < h; j++){
                int wd = j - i;
                int ht = min(heights[i],heights[j]);
                int currwater = ht * wd;
                maxwater = max(maxwater , currwater);
            }
        }
        return maxwater ;
    }
};
