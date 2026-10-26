class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int res=0;
        sort(intervals.begin(),intervals.end());
        int start1=intervals[0][0];
        int end1=intervals[0][1];
        int n=intervals.size();
        for(int i=1;i<n;i++)
        {
            int start2=intervals[i][0];
            int end2=intervals[i][1];
            if(end1>start2)
            {
                res++;
              start1=min(start1,start2);
              end1=min(end2,end1);
            }
            else{
                start1=start2;
                end1=end2;
            }
           
        }
        return res;

    }
};
