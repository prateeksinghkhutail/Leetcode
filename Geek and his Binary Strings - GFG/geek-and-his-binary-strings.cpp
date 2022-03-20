// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int prefixStrings(int N)
	{
	    int m=1000000007;
	    int n=N;
	    uint64_t c[n+1];
	    c[0]=1;
	    c[1]=1;
	    for(int i=2;i<=n;i++)
	    {
	        c[i]=0;
	        for(int j=0;j<i;j++)
	        {
	            c[i]=c[i]%m+((c[j]%m)*(c[i-j-1]%m))%m;
	            
	        }
	    }
	    return c[n]%m;
	}

};
	

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
       	int n;
       	cin >> n;

       

        Solution ob;
        cout << ob.prefixStrings(n);
	    cout << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends