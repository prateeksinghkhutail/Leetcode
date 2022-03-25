// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  long long int m=1000000007;
    long long int nthFibonacci(long long int n){
        // code here
        long long int dp[1001];
        memset(dp,-1,sizeof(dp));
        return fib(n,dp);
    }
    
    long long int fib(long long int n,long long int dp[1001])
    {
        if(n==1 || n==0)
            return n;
        
        if(dp[n]!=-1)
            return dp[n];
        long long int a;
        a=(fib(n-1,dp)%m+fib(n-2,dp)%m)%m;
        dp[n]=a%m;
        return dp[n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends