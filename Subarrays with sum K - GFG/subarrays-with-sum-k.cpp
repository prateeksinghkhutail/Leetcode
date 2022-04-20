// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        unordered_map<int ,int>map;
        int pre=0;
        int count=0;
        for(int i=0;i<N;i++)
        {
            pre+=Arr[i];
            if(pre==k)
                count++;
            if(map.find(pre-k)!=map.end())
            {    count+=map[pre-k];
                 map[pre]++;
            }
            else 
                map[pre]++;
        }
        return count;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends