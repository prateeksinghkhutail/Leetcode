class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int right=1;
        int maxp=0,gmaxp=0;
        while(right<prices.size())
        {
            if(prices[right]>prices[left])
            {
                maxp=prices[right]-prices[left];
                gmaxp=max(gmaxp,maxp);
            }
            else{
                left=right;
            }
            right++;
        }
        return gmaxp;
        
    }
};