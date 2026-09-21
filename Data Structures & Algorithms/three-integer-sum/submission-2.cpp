class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        // for(int i=0;i<nums.size();i++)
        // {  int j=i+1,k=n-1;
        //   if(i>0 && nums[i]==nums[i-1]){continue;}
        //   while(j<k)
        //   {
        //     int sum=nums[i]+nums[j]+nums[k];
        //     if(sum<0)
        //     {
        //       j++;
        //     }else if(sum>0)
        //     {
        //       k--;
        //     }else
        //     {
        //       ans.push_back({nums[i],nums[j],nums[k]});
        //       j++;k--;
        //       while(j<k && nums[j]==nums[j-1])
        //       {
        //         j++;
        //       }
        //     }
        //   }

        for(int i=0;i<n-2;i++)
        { int sum=-1*nums[i];
         int left=i+1;int right=n-1;
         if(i>0 && nums[i]==nums[i-1]){continue;}
         while(left<right)
         { int cursum=nums[left]+nums[right];
           if(cursum==sum){
            ans.push_back({nums[i],nums[left],nums[right]});
            left++;right--;
            while(left<right && nums[left]==nums[left-1]){left++;}
            while(right>0 && nums[right]==nums[right+1]){right--;}
           }
           else if(cursum<sum)
           {
            left++;

           }
           else
           {
            right--;
           }

        }



        }

        return ans;
    }
};
