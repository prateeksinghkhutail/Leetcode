class Solution {
public:
    int minDistance(string s1, string s2) {
        int dp[501][501];
        memset(dp,-1,sizeof(dp));
        return count(s1,s2,0,0,s1.size(),s2.size(),dp);
    }
    
    
    int count(string &s1,string &s2,int i,int j,int n,int m,int dp[][501])
    {
        if(j>=m)
            return n-i;
        if(i>=n)
            return m-j;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        
        if(s1[i]==s2[j])
            return count(s1,s2,i+1,j+1,n,m,dp);
        int a=count(s1,s2,i+1,j+1,n,m,dp);
        int b=count(s1,s2,i+1,j,n,m,dp);
        int c=count(s1,s2,i,j+1,n,m,dp);
        dp[i][j]=1+min(c,min(a,b));
        return dp[i][j];
    }
};