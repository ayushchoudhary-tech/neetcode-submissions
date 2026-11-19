class Solution {
public:  
       long long hours(vector<int>& piles,int n,int mid)
       {
          long long hr=0;
          for(int i=0;i<n;i++)
          {
            hr=hr+piles[i]/mid;
            if(piles[i]%mid!=0)
            {
                hr++;
            }
          }
          return hr;
       }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1; int high=0;
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if(piles[i]>high)
            {
                high=piles[i];
            }
        } 
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            long long speed=hours(piles,n,mid);
            if(speed>h)
            {
                low=mid+1;
            }else
            {
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};
