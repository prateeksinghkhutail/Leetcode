class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int dp[201][201];
        memset(dp,-1,sizeof(dp));
        return values(grid,0,0,grid.size(),grid[0].size(),dp);
        
    }
    
    int values(vector<vector<int>>& grid,int cr,int cc,int m,int n,int dp[201][201])
    {
        if(cr==m-1 && cc==n-1)
            return grid[cr][cc];
        if(cr>=m || cc>=n)
            return 100000;
        
        if(dp[cr][cc]!=-1)
            return dp[cr][cc];
        
        int a=grid[cr][cc]+values(grid,cr+1,cc,m,n,dp);
        int b=grid[cr][cc]+values(grid,cr,cc+1,m,n,dp);
        dp[cr][cc]=min(a,b);
        return dp[cr][cc];
    }
};