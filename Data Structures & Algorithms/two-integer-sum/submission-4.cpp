class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>m;
       int n=nums.size();
       vector<int>ans;
       for(int i=0;i<n;i++)
       { int first=nums[i];
         int find=target-first;
        if(m.find(find)!=m.end())
        { ans.push_back(m[find]);
          ans.push_back(i);
          return ans;
        }m.emplace(first,i);

       }
       return ans;
   
   
    }
};
