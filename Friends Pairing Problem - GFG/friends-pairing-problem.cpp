// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    long long int m=1000000007;
    int countFriendsPairings(int n) 
    { 
        
        unordered_map<long long int,long long int>map;
        return totalways(n,map);
    }
    int totalways(int n,unordered_map<long long int,long long int>&map)
    {
        
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        
        int ck=n;
        
        if(map.find(ck)!=map.end())
            return map[ck];
        
        map[ck]=(totalways(n-1,map)%m+((n-1)%m*totalways(n-2,map)%m)%m)%m;
        
        return map[ck];
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
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 
  // } Driver Code Ends