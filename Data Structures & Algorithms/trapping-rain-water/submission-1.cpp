class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();

        if (n == 0)
            return 0;

        int lftmax[1000];
        int rghtmax[1000];

        lftmax[0] = height[0];
        for (int i = 1; i < n; i++) {
            lftmax[i] = max(lftmax[i - 1], height[i]);
        }

        rghtmax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rghtmax[i] = max(rghtmax[i + 1], height[i]);
        }

        int trap = 0;

        for (int i = 0; i < n; i++) {
            trap += min(lftmax[i], rghtmax[i]) - height[i];
        }

        return trap;
    }
    

};
