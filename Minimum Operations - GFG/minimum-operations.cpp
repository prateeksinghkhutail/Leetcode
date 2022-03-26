// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        unordered_map<int,int>map;
        //memset(dp,-1,sizeof(dp));
        return minop(n,1,map)+1;
    }
    
    int minop(int n,int ci,unordered_map<int,int>&map)
    {
        if(ci==n)
            return 0;
        if(ci>n)
            return 1000000;
        //if(dp[ci]!=-1)
            //return dp[ci];
        if(map.find(ci)!=map.end())
            return map[ci];
        int a=1+minop(n,ci+1,map);
        int b=1+minop(n,ci*2,map);
        map[ci]=min(a,b);
        
        return map[ci];
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}  // } Driver Code Ends