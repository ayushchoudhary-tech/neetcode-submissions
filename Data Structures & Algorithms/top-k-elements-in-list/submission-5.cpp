class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int>map1; int n=nums.size(); vector<int>ans;
        for(int i=0;i<n;i++)
        { int el=nums[i];
          map1[el]++;

        } vector<pair<int,int>>pair1;
        for (const auto& el : map1) {
            pair1.push_back({el.second, el.first});
        }  sort(pair1.rbegin(), pair1.rend());
         int count=0;
        for(const auto& el:pair1)
        { if(count==k)break;
           ans.push_back(el.second);
           count++;

        } 
        return ans;
    }
};
