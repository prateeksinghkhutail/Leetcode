// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int>v;
        int distinct=0;
        unordered_map<int,int>map;
        
        int ac;
        int re=0;
        for(int i=0;i<k;i++)
        {
            int cv=A[i];
            if(map.find(cv)!=map.end())
                map[cv]+=1;
            else 
            {
                distinct++;
                map[cv]++;
            }
        }
        v.push_back(distinct);
        
        
        for(ac=k;ac<n;ac++)
        {
            int de=A[re];
            re+=1;
            map[de]-=1;
            if(map[de]==0)
            {
                map.erase(de);
                distinct--;
            }
            int cv=A[ac];
            if(map.find(cv)!=map.end())
                map[cv]+=1;
            else 
            {
                distinct++;
                map[cv]++;
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