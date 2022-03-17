// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       unordered_map<string,int>map;
       return maxprofit(W,wt,val,0,n,map);
       
    }
    
    int maxprofit(int capacity,int wts[],int profits[],int ci,int n,unordered_map<string,int>&map)
    {
        if(ci>=n)
            return 0;
        
        
        int cip=profits[ci];
        int cwt=wts[ci];
        
        string ck=to_string(ci)+"-"+to_string(capacity);
        int consider=0;
        if(map.find(ck)!=map.end())
        {
            return map[ck];
        }
        
        if(cwt<=capacity)
        {
            consider=cip+maxprofit(capacity-cwt,wts,profits,ci+1,n,map);
        }
        int notconsider=maxprofit(capacity,wts,profits,ci+1,n,map);
        map[ck]=max(consider,notconsider);
        return map[ck];
    }
    
    
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends