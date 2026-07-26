class Solution {
public:
    int maxArea(vector<int>& heights) {
        int lft=0,rgt=heights.size()-1;
        int maxwater=0;
        while(lft<rgt)
        { int width=rgt-lft;
          
         int height= min(heights[lft],heights[rgt]);

          int currwater=width*height;
          maxwater=max(maxwater,currwater);
          (heights[lft]<heights[rgt])?lft++:rgt--;

        }
        return maxwater;
    }
};
