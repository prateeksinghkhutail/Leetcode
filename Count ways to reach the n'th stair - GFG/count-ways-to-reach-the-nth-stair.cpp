// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        unordered_map<int,int>map;
        return count(n,0,map);
    }
    int count(int ts,int cs, unordered_map<int,int>&map)
    {
        if(cs==ts)
        {
            return 1;
        }
        if(cs>ts)
        {
            return 0;
        }
        
        int ck=cs;
        if(map.find(ck)!=map.end())
        {
            return map[ck];
        }
        int m=1000000007;
        long long onejumps=count(ts,cs+1,map);
        long long twojumps=count(ts,cs+2,map);
        map[ck]=(onejumps%m+twojumps%m)%m;
    }
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends