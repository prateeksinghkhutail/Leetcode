// { Driver Code Starts
//Initial template for C++

#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;  // https://www.geeksforgeeks.org/factorial-large-number-using-boost-multiprecision-library/
using namespace std;


 // } Driver Code Ends
//User function template for C++
#include<bits/stdc++.h>

class Solution
{
    public:
    //Function to find the nth catalan number.
    cpp_int findCatalan(int n) 
    {
        //cpp_int dp[101];
        //memset(dp,-1,sizeof(dp));
        unordered_map<int,cpp_int>map;
        return nthcatlan(n,map);
    }
    cpp_int nthcatlan(int n,unordered_map<int,cpp_int>&map)
    {
        if(n==0 || n==1)
            return 1;
        cpp_int ways=0;
        if(map.find(n)!=map.end())
            return map[n];
        for(int i=0;i<n;i++)
        {
            ways+=nthcatlan(i,map)*nthcatlan(n-i-1,map);
        }
        map[n]=ways;
        return map[n];
        
        
    }
};

// { Driver Code Starts.

int main() 
{
    //taking count of testcases
	int t;
	cin>>t;
	while(t--) {
	    
	    //taking nth number
	    int n;
	    cin>>n;
	    Solution obj;
	    //calling function findCatalan function
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}  // } Driver Code Ends