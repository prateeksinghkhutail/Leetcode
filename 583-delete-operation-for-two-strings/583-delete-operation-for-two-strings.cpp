class Solution {
public:
    int minDistance(string s1, string s2) {
        int dp[1001][1001];
        memset(dp,-1,sizeof(dp));
        return lengthoflcs(s1,s2,0,0,s1.length(),s2.length(),dp);
    }
    
    int lengthoflcs(string &s1,string &s2,int i,int j,int m,int n,int dp[1001][1001])
    {
        if(i==m && j==n)
            return 0;
        if(i==m || j==n)
            return max(m-i,n-j);
        int ans=0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s1[i]==s2[j])
        {
            return lengthoflcs(s1,s2,i+1,j+1,m,n,dp);
        }
        
        ans=1+min(lengthoflcs(s1,s2,i,j+1,m,n,dp),lengthoflcs(s1,s2,i+1,j,m,n,dp));
        
        
        dp[i][j]=ans;
        return dp[i][j];
    }
    
};