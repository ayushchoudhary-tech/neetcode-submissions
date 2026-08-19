class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
       unordered_map<int,int>m;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
         int first=nums[i];
         if(m.find(first)!=m.end())
         {
            return true;
         }
         m[first]=i;
       }
       return  false;
    }
};