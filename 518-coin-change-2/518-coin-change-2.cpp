class Solution {
public:
    int change(int amount, vector<int>& coins) {
        unordered_map<string,int>map;
        int dp[302][5002];
        memset(dp,-1,sizeof(dp));
        return ways(amount,coins,0,map,dp);
        
    }
    
    int ways(int amount,vector<int>coins,int ci, unordered_map<string,int>&map,int dp[302][5002])
    {
        if(amount==0)
            return 1;
        
        if(ci>=coins.size())
            return 0;
        //string ck=to_string(ci)+"-"+to_string(amount);
        //if(map.find(ck)!=map.end())
        //    return map[ck];
        if(dp[ci][amount]!=-1)
            return dp[ci][amount];
        int cc=coins[ci];
        int consider=0;
        if(cc<=amount)
            consider=ways(amount-cc,coins,ci,map,dp);
        
        int notconsider=ways(amount,coins,ci+1,map,dp);
        //map[ck]=consider+notconsider;
        dp[ci][amount]=consider+notconsider;
        return dp[ci][amount];
        
    }
};