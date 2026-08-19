class Solution {
public:
    int maxArea(vector<int>& heights) {
        int lft=0,rgt=heights.size()-1;int maxArea=0;
       while(lft<rgt)
       {int width=rgt-lft;
        int height=min(heights[lft],heights[rgt]);
        int water=width*height;
        maxArea=max(water,maxArea);
        (heights[lft]<heights[rgt])?lft++:rgt--;


       }
        return maxArea;
    }
};
