// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        int dp[1001][1001];
        memset(dp,-1,sizeof(dp));
        return maxlen(x,y,s1,s2,0,0,dp);
    }
    
    int maxlen(int n,int m,string &s1,string &s2,int i,int j,int dp[1001][1001])
    {
        
        if(i==n || j==m)
            return 0;
        
        
        
        
        int ans=0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s1[i]==s2[j])
        {
            ans=1+maxlen(n,m,s1,s2,i+1,j+1,dp);
        }else{
            int a=maxlen(n,m,s1,s2,i,j+1,dp);
            int b=maxlen(n,m,s1,s2,i+1,j,dp);
            ans=max(a,b);
        }
        dp[i][j]=ans;
        return dp[i][j];
    }
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends