class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int actualsum=0, expectedsum=0;
        for(int i=0;i<n;i++)
        {
            expectedsum+=nums[i];
        }
        actualsum=n*(n+1)/2;
        int missing=actualsum-expectedsum;

        return missing;
    }
};
