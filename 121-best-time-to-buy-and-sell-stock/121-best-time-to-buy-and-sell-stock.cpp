class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dp[100001][2][2];
        memset(dp,-1,sizeof(dp));
        return maxprofit(prices,0,1,1,dp);
    }
    int maxprofit(vector<int>& prices,int ci,int canbuy,int k,int dp[][2][2])
    {
        if(ci>=prices.size()||k==0)
        {
            return 0;
        }
        
        if(dp[ci][canbuy][k]!=-1)
            return dp[ci][canbuy][k];
        
        int ans=0;
        if(canbuy==1)
        {   
            int idle=maxprofit(prices,ci+1,canbuy,k,dp);
            int buy=-prices[ci]+maxprofit(prices,ci+1,0,k,dp);
            ans=max(idle,buy);
        }
        else{
            
          
            int idle=maxprofit(prices,ci+1,canbuy,k,dp);
            int sell=prices[ci]+maxprofit(prices,ci+1,1,k-1,dp);
            ans=max(idle,sell);
        
        }
        dp[ci][canbuy][k]=ans;
        return dp[ci][canbuy][k];
        
    }
};