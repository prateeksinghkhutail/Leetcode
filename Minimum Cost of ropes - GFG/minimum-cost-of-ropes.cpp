// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        
        long long minValue=0;
        priority_queue<long long ,vector<long long >,greater<long long >>q(arr,arr+n);
        while(q.size()>1)
        {
            long long  a=q.top();
            q.pop();
            long long  b=q.top();
            q.pop();
            minValue+=a+b;
            q.push(a+b);
            
        }
        return minValue;
        
        
    }
};


// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends