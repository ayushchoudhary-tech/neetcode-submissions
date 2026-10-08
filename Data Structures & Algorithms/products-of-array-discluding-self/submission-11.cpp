class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pro(n);
        pro[0]=1;
        for(int i=1;i<n;i++)
        {
            pro[i]=nums[i-1]*pro[i-1];
        }
        int curr=1;
    pro[0]*=curr;
        for(int i=n-2;i>=0;i--)
        {    curr*=nums[i+1];
            pro[i]*=curr;
            
        }
        return pro;
    }
};
