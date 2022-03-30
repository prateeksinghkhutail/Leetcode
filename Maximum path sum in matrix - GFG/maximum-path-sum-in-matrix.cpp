// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        int ans=-1;
         vector<vector<int>>dp(502,vector<int>(502,-1));
       //memset(dp,-1,sizeof(dp));
        for(int cc=0;cc<N;cc++){
            int tans=maxsum(Matrix,0,cc,N,N,dp);
            ans=max(tans,ans);
        }
        return ans;
    }
    
    int maxsum(vector<vector<int>> &Matrix,int cr,int cc,int n,int m,vector<vector<int>>&dp)
    {
        
         if(cr>=n || cc>=n || cc<0 || cr<0) return -1;
         if(cr==n-1)
            return Matrix[cr][cc];
            
        if(dp[cr][cc]!=-1)
            return dp[cr][cc];
        int r=Matrix[cr][cc]+maxsum(Matrix,cr+1,cc,n,m,dp);
        int ld=Matrix[cr][cc]+maxsum(Matrix,cr+1,cc-1,n,m,dp);
        int rd=Matrix[cr][cc]+maxsum(Matrix,cr+1,cc+1,n,m,dp);
        dp[cr][cc]=max(max(ld,rd),r);
        return dp[cr][cc];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}  // } Driver Code Ends