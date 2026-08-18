class Solution {
    public int maxProfit(int[] prices) {
        int maxp=0, bestbuy=Integer.MAX_VALUE;
        for(int i=0;i<prices.length;i++)
        {
            if(prices[i]>bestbuy)
            {
                maxp=Math.max(maxp,prices[i]-bestbuy);
            } bestbuy=Math.min(bestbuy,prices[i]);
        }
        return maxp;

    }
}
