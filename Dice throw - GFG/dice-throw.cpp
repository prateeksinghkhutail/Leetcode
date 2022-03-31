// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long noOfWays(int M , int N , int X) {
        long long dp[51][51];
        memset(dp,-1,sizeof(dp));
        return totalways(M,N,X,dp);
    }
    
    long long totalways(int f,int d,int target,long long dp[51][51])
    {
        if(d==0 && target==0)
            return 1;
        if(d==0 || target<=0)
            return 0;
        
        if(dp[d][target]!=-1)
            return dp[d][target];
        long long ways=0;
        for(int i=1;i<=f;i++)
        {
            ways+=totalways(f,d-1,target-i,dp);
        }
        dp[d][target]=ways;
        return dp[d][target];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int M,N,X;
        
        cin>>M>>N>>X;

        Solution ob;
        cout << ob.noOfWays(M,N,X) << endl;
    }
    return 0;
}  // } Driver Code Ends