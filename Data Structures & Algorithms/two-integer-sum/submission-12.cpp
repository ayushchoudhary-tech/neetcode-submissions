class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>m; int n=nums.size(); vector<int>ans;
       for(int i=0;i<n;i++)
       {  int cur=nums[i];
         int rem=target-cur;
         if(m.find(rem)!=m.end())
         { ans.push_back(m[rem]);
            ans.push_back(i);
            return ans;

         } m[cur]=i;


       }
       return ans;
   
   
    }
};
