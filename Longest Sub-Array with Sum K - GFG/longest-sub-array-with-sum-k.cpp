// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        // Complete the function
        unordered_map<int ,int>map;
        int pre=0;
        int ans=0;
        map.insert(make_pair(pre,-1));
        for(int i=0;i<N;i++)
        {   
            
            pre+=A[i];                                          
            if(map.find(pre-k)!=map.end())
            {    ans=max(ans,i-map[pre-k]);
                                                        
            }
            if(map.find(pre)==map.end())
                map[pre]=i;
        }
        return ans;
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends