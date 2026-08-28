class Solution {
public: 
        void getAllSubset(vector<int>& nums,vector<int>&subset,int i,vector<vector<int>>&AllSubSet)
        { if(i==nums.size()){
            AllSubSet.push_back({subset});
            return;
            }
            subset.push_back(nums[i]);
           getAllSubset(nums,subset,i+1,AllSubSet);
           subset.pop_back();
           getAllSubset(nums,subset,i+1,AllSubSet);

        }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>AllSubSet;
        vector<int>subset;
         getAllSubset(nums,subset,0,AllSubSet);
         return AllSubSet;
    }
};
