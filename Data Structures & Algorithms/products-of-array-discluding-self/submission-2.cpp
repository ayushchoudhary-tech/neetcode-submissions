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
        int cur=1;
        pro[n]*=1;
        for(int i=n-2;i>=0;i--)
        { cur*=nums[i+1];
          pro[i]*=cur;

        }
        return pro;
    }
};
