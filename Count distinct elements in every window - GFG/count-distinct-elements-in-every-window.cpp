// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int>v;
        unordered_map<int,int>map;
        int distinct=0;
        for(int i=0;i<k;i++)
        {
            int cv=A[i];
            if(map.find(cv)!=map.end())
            {
                map[cv]+=1;
                
            }
            else{
                map[cv]=1;
                distinct+=1;
            }
        }
        v.push_back(distinct);
        int release=0;
        for(int acquire=k;acquire<n;acquire++){
            int de=A[release];
            release+=1;
            map[de]-=1;
            if(map[de]==0){
                map.erase(de);
                distinct=distinct-=1;
            }
            
            int cv=A[acquire];
            if(map.find(cv)!=map.end())
            {
                map[cv]+=1;
                
            }
            else{
                map[cv]=1;
                distinct+=1;
            }
            v.push_back(distinct);
        }
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends