class Solution {
public:      vector<vector<int>>merge(vector<vector<int>>& combined)
{              vector<vector<int>>res;
        int n=combined.size();
        int  start1=combined[0][0];
        int end1=combined[0][1];
        for(int i=1;i<n;i++)
        {
            int start2=combined[i][0];
            int end2=combined[i][1];
            if(start2<end1 || start2==end1)
            {
                start1=start1;
                end1=max(end1,end2);
                continue;
            }else
            {
                res.push_back({start1,end1});
                start1=start2;
                end1=end2;
            }
        }
        res.push_back({start1,end1});
        return res;
}
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size(); bool insert=false;  vector<vector<int>>combined;
        for(int i=0;i<n;i++)
        { int start=intervals[i][0];
          if(insert ==false &&start>newInterval[0])
          {  combined.push_back(newInterval);
              insert=true;
          }
          combined.push_back(intervals[i]);


        }
        if(!insert)
        {
            combined.push_back(newInterval);
        }
        return merge(combined);
    }
};
