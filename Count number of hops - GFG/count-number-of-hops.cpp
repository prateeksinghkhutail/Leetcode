// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    long long int m=1000000007;
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        long long int dp[100001];
        memset(dp,-1,sizeof(dp));
        return totalways(n,0,dp);
        
        
    }
    long long int totalways(int n,int ci,long long int dp[100001])
    {
        if(ci==n)
            return 1;
        if(ci>n)
            return 0;
        
        if(dp[ci]!=-1)
            return dp[ci];
        long long int total=(totalways(n,ci+1,dp)%m+totalways(n,ci+2,dp)%m+totalways(n,ci+3,dp)%m)%m;
        dp[ci]=total;
        return dp[ci];
    }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends