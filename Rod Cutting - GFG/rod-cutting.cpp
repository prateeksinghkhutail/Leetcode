// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        int dp[1001][1001];
        memset(dp,-1,sizeof(dp));
        int len=n;
        return maxprice(price,n,0,len,dp);
    }
    
    
    int maxprice(int price[],int n,int ci,int len,int dp[1001][1001])
    {
        if(n==0)
            return 0;
        if(ci>=len)
            return 0;
        if(dp[ci][n]!=-1)
            return dp[ci][n];
        
        int consider=0;
        int currentpiecelength=ci+1;
        if(currentpiecelength<=n)
            consider=price[ci]+maxprice(price,n-(ci+1),ci,len,dp);
        int notconsider=maxprice(price,n,ci+1,len,dp);
        dp[ci][n]=max(consider,notconsider);
        return dp[ci][n];
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends