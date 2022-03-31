// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to return the total number of possible unique BST. 
    int numTrees(int N) 
    {
        // Your code here
        long dp[1001];
        memset(dp,-1,sizeof(dp));
        return catalan(N,dp);
    }
    long catalan(int n,long dp[1001])
    {
    if(n==0)
    {
        dp[n]=1;
        return 1;
    }
    if(n==1)
    {
        dp[n]=1;
        return 1;
    }
    long ways=0;
    if(dp[n]!=-1)
        return dp[n];
    long m=1000000007;
    for(int i=0;i<n;i++)
    {
        
        ways=(ways+catalan(i,dp)*catalan(n-i-1,dp)%m)%m;
    }
    dp[n]=ways;
    return dp[n];
    }
};

// { Driver Code Starts.
#define mod (int)(1e9+7)
int main(){
    
    //taking total testcases
    int t;
    cin>>t;
    while(t--){
        
        //taking total number of elements
        int n;
        cin>>n;
        Solution ob;
        //calling function numTrees()
        cout<<ob.numTrees(n)<<"\n";
    }
}	  // } Driver Code Ends