class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int l,r,p,mp;
        mp=p=0;
        l=0;r=1;
        while(r<n)
        {
            if(prices[l]<prices[r])
            {
                p=prices[r]-prices[l];
                mp=max(p,mp);
            }
            else{l=r;
                }
            r++;
        }
        return mp;
    }
};