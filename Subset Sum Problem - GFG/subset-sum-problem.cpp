// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        
        vector<vector<int>>dp(arr.size()+1,vector<int>(sum+1,-1));
        //memset(dp,-1,sizeof(dp));
        return check(arr,sum,0,dp);
    }
    
    bool check(vector<int>&arr,int sum,int ci,vector<vector<int>>&dp)
    {
        
        if(sum==0)
            return true;
        if(ci>=arr.size() )
            return false;
        
        int consider=0;
        int cs=arr[ci];
        if(dp[ci][sum]!=-1)
        {
            return dp[ci][sum];
            
        }
           
        if(cs<=sum)
            consider=check(arr,sum-cs,ci+1,dp);
        if(consider)
        {
            dp[ci][sum]=consider;
            return true;
        }
        int notconsider=check(arr,sum,ci+1,dp);
        dp[ci][sum]=consider ||notconsider;
        return dp[ci][sum];
        
        
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends