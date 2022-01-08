class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int r=1;
        int profit=0;
        int maxprofit=0;
        while(r<prices.size())
        {
            if(prices[l]<prices[r])
            {
                profit=prices[r]-prices[l];
                maxprofit=max(maxprofit,profit);
                
            }
            else{
                l=r;
            }
            r++;
        }
        return maxprofit;
    }
};