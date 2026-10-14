class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0; int ans=-1; int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int v1=nums[i];
            int v2=sum+nums[i];
            sum=max(v1,v2);
            ans=max(sum,ans);
        }
        return ans;
    }
};
