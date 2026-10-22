class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
        int n=interval.size(); vector<vector<int>>res;
        sort(interval.begin(),interval.end());
        int start1=interval[0][0];
        int end1=interval[0][1];
        for(int i=1;i<n;i++)
        {
            int start2=interval[i][0];
            int end2=interval[i][1];
            if(start2<end1 || start2==end1)
            {
                start1=start1;
                end1=max(end1,end2);
                continue;
            }
            else{ res.push_back({start1,end1});
              start1=start2;
              end1=end2;     
            }
        }res.push_back({start1,end1});
        return res;
    }
};
