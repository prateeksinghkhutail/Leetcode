class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int ans=1000000000;
        int dp[101][101];
        memset(dp,-1,sizeof(dp));
        for(int cc=0;cc<n;cc++)
        {
            int tans=minpathsum(matrix,0,cc,m,n,dp);
            ans=min(ans,tans);
            
        }
        return ans;
    }
    
    
    int minpathsum(vector<vector<int>>& matrix,int cr,int cc,int m,int n,int dp[101][101])
    {
        if(cc<0||cc>=n)
            return 100001;
        
        if(cr==m-1)
            return matrix[cr][cc];
        if(dp[cr][cc]!=-1)
            return dp[cr][cc];
        int ld=matrix[cr][cc]+minpathsum(matrix,cr+1,cc-1,m,n,dp);
        int rd=matrix[cr][cc]+minpathsum(matrix,cr+1,cc+1,m,n,dp);
        int d=matrix[cr][cc]+minpathsum(matrix,cr+1,cc,m,n,dp);
        int dd=min(ld,rd);
        dp[cr][cc]=min(dd,d);
        return dp[cr][cc];
        
    }
};