// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        unordered_map<string,int>map;
        int dp[1002][1002];
        memset(dp,-1,sizeof(dp));
        return maxprofit(wt,val,W,N,0,map,dp);
    }
    int maxprofit(int wt[],int val[],int w,int n,int ci,unordered_map<string,int>&map,int dp[][1002])
    {
        if(ci>=n)
            return 0;
        if(w==0)
            return 0;
            
        //string ck=to_string(ci)+"-"+to_string(w);
        //if(map.find(ck)!=map.end())
        //    return map[ck];
        if(dp[ci][w]!=-1)
            return dp[ci][w];
        int cip=val[ci];
        int ciw=wt[ci];
        int consider=0;
        
        if(ciw<=w)
            consider=cip+maxprofit(wt,val,w-ciw,n,ci,map,dp);
            
        int notconsider=maxprofit(wt,val,w,n,ci+1,map,dp); 
        //map[ck]=max(consider,notconsider);
        dp[ci][w]=max(consider,notconsider);
        return dp[ci][w];
            
    }
};










// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  // } Driver Code Ends