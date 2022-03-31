class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        int dp[31][1001];
        memset(dp,-1,sizeof(dp));
       return totalways(n,k,target,dp);
    }
    
    int totalways(int d,int f,int target,int dp[31][1001])
    {
        if(target==0 && d==0)
            return 1;
        if(target<=0 || d==0)
            return 0;
        int ways=0;
        int m=1e9+7;
        if(dp[d][target]!=-1)
            return dp[d][target];
        for(int i=1;i<=f;i++)
        {
            int tw=totalways(d-1,f,target-i,dp)%m;
            ways=ways%m;
            ways=(ways+tw)%m;
            
        }
        dp[d][target]=ways;
        return dp[d][target];
    }
};