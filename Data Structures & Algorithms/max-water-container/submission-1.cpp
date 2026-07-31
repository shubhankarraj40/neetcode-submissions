class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater = 0;
        int ht = heights.size();
        int lp = 0;
        int rp = ht-1;
        while(lp < rp ){
            int wid = rp - lp;
            int ht = min(heights[lp] , heights[rp]);
            int currwater = wid * ht;
            maxwater = max(maxwater , currwater);
            heights[lp] < heights[rp]? lp++: rp--;
        }
        return maxwater;
    }
};
