// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
vector<int>v;
    vector<int> minPartition(int N)
    {
        // code here
        int coins[]={1,2,5,10,20,50,100,200,500,2000};
        int t=sizeof(coins)/sizeof(coins[0]);
        return mincoins(N,coins,t);
    }
    
    vector<int> mincoins(int n,int *coins,int t)
    {
        int ans=0;
        while(n>0)
        {
        int indx=upper_bound(coins,coins+t,n)-1-coins;
        v.push_back(coins[indx]);
        n=n-coins[indx];
        
        }       
        return v;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends