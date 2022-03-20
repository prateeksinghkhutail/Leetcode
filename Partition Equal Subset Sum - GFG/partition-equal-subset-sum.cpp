// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        int sum=0;
       for(int i=0;i<N;i++)
       {
           sum+=arr[i];
       }
       if(sum%2!=0)
       {
           return 0;
       }
       unordered_map<string,int>map;
       return check(N,arr,sum/2,0,map);
    }
    
    int check(int n,int arr[],int tsum,int ci,unordered_map<string,int>&map)
    {
        if(tsum==0)
        {
            return 1;
        }
        if(ci>=n)
        {
            return 0;
        }
        
        int cnum=arr[ci];
        string ck=to_string(ci)+"-"+to_string(tsum);
        if(map.find(ck)!=map.end())
        {
            return map[ck];
        }
        int consider=0;
        if(tsum>=cnum)
        {
            consider=check(n,arr,tsum-cnum,ci+1,map);
        }
        if(consider)
        {
            map[ck]=consider;
            return 1;
        }
        int notconsider=check(n,arr,tsum,ci+1,map);
        map[ck]=consider||notconsider;
        return map[ck];
        
        
    }
    
    
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends