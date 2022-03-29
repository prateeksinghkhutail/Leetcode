// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int count(int S[], int m, int n) {
        long long int dp[1001][1001];
        memset(dp,-1,sizeof(dp));
    return change(S,m,n,0,dp);
   
    }
    
    long long int change(int S[],int m,int n,int ci,long long int dp[1001][1001])
    {
        if(n==0)
            return 1;
        if(ci>=m)
            return 0;
            
        if(dp[ci][n]!=-1)
            return dp[ci][n];
        long long int consider=0;
        if(S[ci]<=n)
            consider=change(S,m,n-S[ci],ci,dp);
        long long int notconsider=change(S,m,n,ci+1,dp);
        dp[ci][n]=consider+notconsider;
        return dp[ci][n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends