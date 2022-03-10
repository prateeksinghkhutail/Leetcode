// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string sevenSegments(string S, int N) {
        // code here
        S=S.substr(0,N);
        int symbol[]={6,2,5,5,4,5,6,3,7,5};
        int sum=0;
        string ans="";
        for(int i=0;i<N;i++)
        {
            int z=S[i]-'0';
            sum+=symbol[z];
        }
        string s="";
        int a[N];
        for(int i=0;i<N;i++)
        {
            a[i]=2;
            sum-=2;
        }
        int i=0;
        while(sum>=4 && i<N)
        {
            sum+=2;
            a[i]=6;
            sum-=6;
            i++;
        }
        a[N-1]+=sum;
        for(i=0;i<N;i++)
        {
            if(a[i]==6)
            ans+='0';
            else if(a[i]==2)
            ans+='1';
            else if(a[i]==3)
            ans+='7';
            else if(a[i]==4)
            ans+='4';
            else
            ans+='2';
            
        }
        return ans;
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        string S;
        cin>>S;

        Solution ob;
        cout << ob.sevenSegments(S,N) << endl;
    }
    return 0;
}  // } Driver Code Ends