// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    static bool compare(pair<int,int>p1,pair<int,int>p2)
    {
	      return p1.second<p2.second;
    }
    //Function to find the maximum number of activities that can
    //be performed by a single person.
   
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        
       
        int s,e;
        class a;
	    vector<pair<int,int>>v;
	    for(int i=0;i<n;i++)
	    {
		    s=start[i];
		    e=end[i];
		    v.push_back(make_pair(s,e));
	    }
	    
	    sort(v.begin(),v.end(),compare);
	    
	    int res=1;
	    int fin=v[0].second;
	    for(int i=1;i<n;i++)
	    {
		    if(v[i].first>fin)
		    {
			    res++;
			    fin=v[i].second;
		    }
	    }
	    v.clear();
	    return res;
    }
};




// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends