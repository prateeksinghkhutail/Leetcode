// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int editDistance(string s, string t) {
        int dp[101][101];
        memset(dp,-1,sizeof(dp));
        return count(s,t,0,0,s.size(),t.size(),dp);
        // Code here
    }
     int count(string &s1,string &s2,int i,int j,int n,int m,int dp[][101])
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

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends