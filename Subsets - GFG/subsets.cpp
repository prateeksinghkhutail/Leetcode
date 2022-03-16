// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    void dfs(vector<vector<int>>&ans,vector<int>&v,vector<int>nums,int i)
    {
        if(i==nums.size())
        {
            ans.push_back(v);
            return;
        }
        dfs(ans,v,nums,i+1);
        v.push_back(nums[i]);
        dfs(ans,v,nums,i+1);
        v.pop_back();
        return;
    }
    
    
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<vector<int>>ans;
        vector<int>v;
        dfs(ans,v,A,0);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends