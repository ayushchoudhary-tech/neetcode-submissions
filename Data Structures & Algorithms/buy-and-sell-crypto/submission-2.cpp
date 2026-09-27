class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int maxprofit=0, bestBuy=INT_MAX;
        // for(int i=0;i<prices.size();i++)
        // {
        //     if(prices[i] > bestBuy)
        //     {
        //         maxprofit=max(maxprofit,prices[i]-bestBuy);
        //     }
        //     bestBuy=min(bestBuy,prices[i]);
        // }
        // return maxprofit;
        int n=prices.size();
        int low=0;
        int ans=0;
        for(int high=0;high<n;high++)
        {  int pro=prices[high]-prices[low];
            ans=max(pro,ans);
          while(prices[low]>prices[high])
          {
            low++;
            pro=prices[high]-prices[low];
            ans=max(pro,ans);
          }
          pro=prices[high]-prices[low];
            ans=max(pro,ans);



        }
        return ans;

    }
};
